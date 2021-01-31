/* AUTOGENERATED, DO NOT EDIT DIRECTLY
 * See gtk-priv/README.md for more information
 *
 * This file is part of gtk-layer-shell
 *
 * Copyright (C) 2019 Red Hat, Inc.
 * Copyright © 2021 gtk-priv/scripts/code.py
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef GDK_GEOMETRY_PRIV_H
#define GDK_GEOMETRY_PRIV_H

#include "common.h"

typedef struct _GdkGeometry GdkGeometry;

// Version ID 0
// Valid for GTK master
struct _GdkGeometry_v3_0_0
{
  int min_width;
  int min_height;
  int max_width;
  int max_height;
};

// For internal use only
int gdk_geometry_priv_get_version_id() {
  static int version_id = -1;
  
  if (version_id == -1) {
    gtk_priv_assert_gtk_version_valid();
    int combo = gtk_get_minor_version() * 1000 + gtk_get_micro_version();
  
    switch (combo) {
        break;
  
      default:
        gtk_priv_warn_gtk_version_may_be_unsupported();
    }
  
    {
      version_id = 0;
    }
  }
  
  return version_id;
}

// GdkGeometry::min_width

int gdk_geometry_priv_get_min_width(GdkGeometry * self) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: return ((struct _GdkGeometry_v3_0_0*)self)->min_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_geometry_priv_set_min_width(GdkGeometry * self, int min_width) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: ((struct _GdkGeometry_v3_0_0*)self)->min_width = min_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkGeometry::min_height

int gdk_geometry_priv_get_min_height(GdkGeometry * self) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: return ((struct _GdkGeometry_v3_0_0*)self)->min_height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_geometry_priv_set_min_height(GdkGeometry * self, int min_height) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: ((struct _GdkGeometry_v3_0_0*)self)->min_height = min_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkGeometry::max_width

int gdk_geometry_priv_get_max_width(GdkGeometry * self) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: return ((struct _GdkGeometry_v3_0_0*)self)->max_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_geometry_priv_set_max_width(GdkGeometry * self, int max_width) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: ((struct _GdkGeometry_v3_0_0*)self)->max_width = max_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkGeometry::max_height

int gdk_geometry_priv_get_max_height(GdkGeometry * self) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: return ((struct _GdkGeometry_v3_0_0*)self)->max_height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_geometry_priv_set_max_height(GdkGeometry * self, int max_height) {
  switch (gdk_geometry_priv_get_version_id()) {
    case 0: ((struct _GdkGeometry_v3_0_0*)self)->max_height = max_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_GEOMETRY_PRIV_H
