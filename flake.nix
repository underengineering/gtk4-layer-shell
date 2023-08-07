{
  inputs = {
    utils.url = "github:numtide/flake-utils";
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  };
  outputs = {
    self,
    nixpkgs,
    utils,
    ...
  }:
    utils.lib.eachDefaultSystem (system: let
      pkgs = import nixpkgs {inherit system;};
    in rec {
      packages.gtk4-layer-shell = pkgs.stdenv.mkDerivation {
        name = "gtk4-layer-shell";
        src = self;
        strictDeps = true;
        nativeBuildInputs = with pkgs; [
          meson
          ninja
          pkg-config
          wayland
          gobject-introspection
          gtk-doc
          docbook-xsl-nons
          vala
        ];
        buildInputs = with pkgs; [
          wayland
          gtk4
        ];
        mesonFlags = [
          "-Dexamples=true"
          "-Ddocs=true"
        ];
      };
      defaultPackage = packages.gtk4-layer-shell;
    });
}
