/* AUTOGENERATED, DO NOT EDIT DIRECTLY
 * See gtk-priv/README.md for more information
 *
 * This file is part of gtk-layer-shell
 *
 * Copyright (C) 2009 Carlos Garnacho <carlosg@gnome.org>
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

#ifndef GDK_WAYLAND_SEAT_PRIV_H
#define GDK_WAYLAND_SEAT_PRIV_H

#include "common.h"

typedef struct _GdkWaylandSeat GdkWaylandSeat;

// Version ID 0
// Valid for GTK master
struct _GdkWaylandSeat_v3_0_0
{
  GdkSeat parent_instance;
  guint32 id;
  struct wl_seat *wl_seat;
  struct wl_pointer *wl_pointer;
  struct wl_keyboard *wl_keyboard;
  struct wl_touch *wl_touch;
  struct zwp_pointer_gesture_swipe_v1 *wp_pointer_gesture_swipe;
  struct zwp_pointer_gesture_pinch_v1 *wp_pointer_gesture_pinch;
  struct zwp_tablet_seat_v2 *wp_tablet_seat;
  GdkDisplay *display;
  GdkDevice *logical_pointer;
  GdkDevice *logical_keyboard;
  GdkDevice *pointer;
  GdkDevice *wheel_scrolling;
  GdkDevice *finger_scrolling;
  GdkDevice *continuous_scrolling;
  GdkDevice *keyboard;
  GdkDevice *logical_touch;
  GdkDevice *touch;
  GdkCursor *cursor;
  GdkKeymap *keymap;
  GHashTable *touches;
  GList *tablets;
  GList *tablet_tools;
  GList *tablet_pads;
  struct _GdkWaylandPointerData_v3_0_0 pointer_info;
  struct _GdkWaylandPointerData_v3_0_0 touch_info;
  GdkModifierType key_modifiers;
  GdkSurface *keyboard_focus;
  GdkSurface *grab_surface;
  uint32_t grab_time;
  gboolean have_server_repeat;
  uint32_t server_repeat_rate;
  uint32_t server_repeat_delay;
  struct wl_data_offer *pending_offer;
  GdkContentFormatsBuilder *pending_builder;
  GdkDragAction pending_source_actions;
  GdkDragAction pending_action;
  struct wl_callback *repeat_callback;
  guint32 repeat_timer;
  guint32 repeat_key;
  guint32 repeat_count;
  gint64 repeat_deadline;
  uint32_t keyboard_time;
  uint32_t keyboard_key_serial;
  GdkClipboard *clipboard;
  GdkClipboard *primary_clipboard;
  struct wl_data_device *data_device;
  GdkDrag *drag;
  GdkDrop *drop;
  guint gesture_n_fingers;
  double gesture_scale;
  GdkCursor *grab_cursor;
};

// For internal use only
int gdk_wayland_seat_priv_get_version_id() {
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

// GdkWaylandSeat::parent_instance

GdkSeat * gdk_wayland_seat_priv_get_parent_instance_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkSeat *)&((struct _GdkWaylandSeat_v3_0_0*)self)->parent_instance;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::id

guint32 * gdk_wayland_seat_priv_get_id_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (guint32 *)&((struct _GdkWaylandSeat_v3_0_0*)self)->id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wl_seat

struct wl_seat * gdk_wayland_seat_priv_get_wl_seat(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_seat;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wl_seat(GdkWaylandSeat * self, struct wl_seat * wl_seat) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_seat = wl_seat; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wl_pointer

struct wl_pointer * gdk_wayland_seat_priv_get_wl_pointer(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_pointer;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wl_pointer(GdkWaylandSeat * self, struct wl_pointer * wl_pointer) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_pointer = wl_pointer; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wl_keyboard

struct wl_keyboard * gdk_wayland_seat_priv_get_wl_keyboard(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_keyboard;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wl_keyboard(GdkWaylandSeat * self, struct wl_keyboard * wl_keyboard) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_keyboard = wl_keyboard; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wl_touch

struct wl_touch * gdk_wayland_seat_priv_get_wl_touch(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_touch;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wl_touch(GdkWaylandSeat * self, struct wl_touch * wl_touch) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wl_touch = wl_touch; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wp_pointer_gesture_swipe

struct zwp_pointer_gesture_swipe_v1 * gdk_wayland_seat_priv_get_wp_pointer_gesture_swipe(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_pointer_gesture_swipe;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wp_pointer_gesture_swipe(GdkWaylandSeat * self, struct zwp_pointer_gesture_swipe_v1 * wp_pointer_gesture_swipe) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_pointer_gesture_swipe = wp_pointer_gesture_swipe; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wp_pointer_gesture_pinch

struct zwp_pointer_gesture_pinch_v1 * gdk_wayland_seat_priv_get_wp_pointer_gesture_pinch(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_pointer_gesture_pinch;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wp_pointer_gesture_pinch(GdkWaylandSeat * self, struct zwp_pointer_gesture_pinch_v1 * wp_pointer_gesture_pinch) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_pointer_gesture_pinch = wp_pointer_gesture_pinch; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wp_tablet_seat

struct zwp_tablet_seat_v2 * gdk_wayland_seat_priv_get_wp_tablet_seat(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_tablet_seat;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wp_tablet_seat(GdkWaylandSeat * self, struct zwp_tablet_seat_v2 * wp_tablet_seat) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wp_tablet_seat = wp_tablet_seat; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::display

GdkDisplay * gdk_wayland_seat_priv_get_display(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->display;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_display(GdkWaylandSeat * self, GdkDisplay * display) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->display = display; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::logical_pointer

GdkDevice * gdk_wayland_seat_priv_get_logical_pointer(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_pointer;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_logical_pointer(GdkWaylandSeat * self, GdkDevice * logical_pointer) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_pointer = logical_pointer; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::logical_keyboard

GdkDevice * gdk_wayland_seat_priv_get_logical_keyboard(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_keyboard;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_logical_keyboard(GdkWaylandSeat * self, GdkDevice * logical_keyboard) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_keyboard = logical_keyboard; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pointer

GdkDevice * gdk_wayland_seat_priv_get_pointer(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->pointer;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_pointer(GdkWaylandSeat * self, GdkDevice * pointer) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->pointer = pointer; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::wheel_scrolling

GdkDevice * gdk_wayland_seat_priv_get_wheel_scrolling(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->wheel_scrolling;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_wheel_scrolling(GdkWaylandSeat * self, GdkDevice * wheel_scrolling) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->wheel_scrolling = wheel_scrolling; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::finger_scrolling

GdkDevice * gdk_wayland_seat_priv_get_finger_scrolling(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->finger_scrolling;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_finger_scrolling(GdkWaylandSeat * self, GdkDevice * finger_scrolling) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->finger_scrolling = finger_scrolling; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::continuous_scrolling

GdkDevice * gdk_wayland_seat_priv_get_continuous_scrolling(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->continuous_scrolling;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_continuous_scrolling(GdkWaylandSeat * self, GdkDevice * continuous_scrolling) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->continuous_scrolling = continuous_scrolling; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::keyboard

GdkDevice * gdk_wayland_seat_priv_get_keyboard(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_keyboard(GdkWaylandSeat * self, GdkDevice * keyboard) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard = keyboard; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::logical_touch

GdkDevice * gdk_wayland_seat_priv_get_logical_touch(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_touch;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_logical_touch(GdkWaylandSeat * self, GdkDevice * logical_touch) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->logical_touch = logical_touch; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::touch

GdkDevice * gdk_wayland_seat_priv_get_touch(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->touch;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_touch(GdkWaylandSeat * self, GdkDevice * touch) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->touch = touch; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::cursor

GdkCursor * gdk_wayland_seat_priv_get_cursor(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_cursor(GdkWaylandSeat * self, GdkCursor * cursor) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->cursor = cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::keymap

GdkKeymap * gdk_wayland_seat_priv_get_keymap(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->keymap;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_keymap(GdkWaylandSeat * self, GdkKeymap * keymap) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->keymap = keymap; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::touches

GHashTable * gdk_wayland_seat_priv_get_touches(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->touches;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_touches(GdkWaylandSeat * self, GHashTable * touches) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->touches = touches; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::tablets

GList * gdk_wayland_seat_priv_get_tablets(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->tablets;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_tablets(GdkWaylandSeat * self, GList * tablets) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->tablets = tablets; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::tablet_tools

GList * gdk_wayland_seat_priv_get_tablet_tools(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->tablet_tools;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_tablet_tools(GdkWaylandSeat * self, GList * tablet_tools) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->tablet_tools = tablet_tools; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::tablet_pads

GList * gdk_wayland_seat_priv_get_tablet_pads(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->tablet_pads;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_tablet_pads(GdkWaylandSeat * self, GList * tablet_pads) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->tablet_pads = tablet_pads; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pointer_info

GdkWaylandPointerData * gdk_wayland_seat_priv_get_pointer_info_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkWaylandPointerData *)&((struct _GdkWaylandSeat_v3_0_0*)self)->pointer_info;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::touch_info

GdkWaylandPointerData * gdk_wayland_seat_priv_get_touch_info_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkWaylandPointerData *)&((struct _GdkWaylandSeat_v3_0_0*)self)->touch_info;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::key_modifiers

GdkModifierType * gdk_wayland_seat_priv_get_key_modifiers_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkModifierType *)&((struct _GdkWaylandSeat_v3_0_0*)self)->key_modifiers;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::keyboard_focus

GdkSurface * gdk_wayland_seat_priv_get_keyboard_focus(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_focus;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_keyboard_focus(GdkWaylandSeat * self, GdkSurface * keyboard_focus) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_focus = keyboard_focus; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::grab_surface

GdkSurface * gdk_wayland_seat_priv_get_grab_surface(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_grab_surface(GdkWaylandSeat * self, GdkSurface * grab_surface) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_surface = grab_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::grab_time

uint32_t gdk_wayland_seat_priv_get_grab_time(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_time;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_grab_time(GdkWaylandSeat * self, uint32_t grab_time) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_time = grab_time; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::have_server_repeat

gboolean gdk_wayland_seat_priv_get_have_server_repeat(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->have_server_repeat;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_have_server_repeat(GdkWaylandSeat * self, gboolean have_server_repeat) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->have_server_repeat = have_server_repeat; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::server_repeat_rate

uint32_t gdk_wayland_seat_priv_get_server_repeat_rate(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->server_repeat_rate;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_server_repeat_rate(GdkWaylandSeat * self, uint32_t server_repeat_rate) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->server_repeat_rate = server_repeat_rate; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::server_repeat_delay

uint32_t gdk_wayland_seat_priv_get_server_repeat_delay(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->server_repeat_delay;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_server_repeat_delay(GdkWaylandSeat * self, uint32_t server_repeat_delay) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->server_repeat_delay = server_repeat_delay; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pending_offer

struct wl_data_offer * gdk_wayland_seat_priv_get_pending_offer(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->pending_offer;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_pending_offer(GdkWaylandSeat * self, struct wl_data_offer * pending_offer) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->pending_offer = pending_offer; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pending_builder

GdkContentFormatsBuilder * gdk_wayland_seat_priv_get_pending_builder(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->pending_builder;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_pending_builder(GdkWaylandSeat * self, GdkContentFormatsBuilder * pending_builder) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->pending_builder = pending_builder; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pending_source_actions

GdkDragAction * gdk_wayland_seat_priv_get_pending_source_actions_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkDragAction *)&((struct _GdkWaylandSeat_v3_0_0*)self)->pending_source_actions;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::pending_action

GdkDragAction * gdk_wayland_seat_priv_get_pending_action_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (GdkDragAction *)&((struct _GdkWaylandSeat_v3_0_0*)self)->pending_action;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::repeat_callback

struct wl_callback * gdk_wayland_seat_priv_get_repeat_callback(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_callback;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_repeat_callback(GdkWaylandSeat * self, struct wl_callback * repeat_callback) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_callback = repeat_callback; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::repeat_timer

guint32 * gdk_wayland_seat_priv_get_repeat_timer_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (guint32 *)&((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_timer;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::repeat_key

guint32 * gdk_wayland_seat_priv_get_repeat_key_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (guint32 *)&((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_key;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::repeat_count

guint32 * gdk_wayland_seat_priv_get_repeat_count_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (guint32 *)&((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_count;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::repeat_deadline

gint64 * gdk_wayland_seat_priv_get_repeat_deadline_ptr(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return (gint64 *)&((struct _GdkWaylandSeat_v3_0_0*)self)->repeat_deadline;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::keyboard_time

uint32_t gdk_wayland_seat_priv_get_keyboard_time(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_time;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_keyboard_time(GdkWaylandSeat * self, uint32_t keyboard_time) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_time = keyboard_time; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::keyboard_key_serial

uint32_t gdk_wayland_seat_priv_get_keyboard_key_serial(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_key_serial;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_keyboard_key_serial(GdkWaylandSeat * self, uint32_t keyboard_key_serial) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->keyboard_key_serial = keyboard_key_serial; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::clipboard

GdkClipboard * gdk_wayland_seat_priv_get_clipboard(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->clipboard;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_clipboard(GdkWaylandSeat * self, GdkClipboard * clipboard) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->clipboard = clipboard; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::primary_clipboard

GdkClipboard * gdk_wayland_seat_priv_get_primary_clipboard(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->primary_clipboard;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_primary_clipboard(GdkWaylandSeat * self, GdkClipboard * primary_clipboard) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->primary_clipboard = primary_clipboard; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::data_device

struct wl_data_device * gdk_wayland_seat_priv_get_data_device(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->data_device;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_data_device(GdkWaylandSeat * self, struct wl_data_device * data_device) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->data_device = data_device; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::drag

GdkDrag * gdk_wayland_seat_priv_get_drag(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->drag;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_drag(GdkWaylandSeat * self, GdkDrag * drag) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->drag = drag; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::drop

GdkDrop * gdk_wayland_seat_priv_get_drop(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->drop;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_drop(GdkWaylandSeat * self, GdkDrop * drop) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->drop = drop; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::gesture_n_fingers

guint gdk_wayland_seat_priv_get_gesture_n_fingers(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->gesture_n_fingers;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_gesture_n_fingers(GdkWaylandSeat * self, guint gesture_n_fingers) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->gesture_n_fingers = gesture_n_fingers; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::gesture_scale

double gdk_wayland_seat_priv_get_gesture_scale(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->gesture_scale;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_gesture_scale(GdkWaylandSeat * self, double gesture_scale) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->gesture_scale = gesture_scale; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWaylandSeat::grab_cursor

GdkCursor * gdk_wayland_seat_priv_get_grab_cursor(GdkWaylandSeat * self) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: return ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_wayland_seat_priv_set_grab_cursor(GdkWaylandSeat * self, GdkCursor * grab_cursor) {
  switch (gdk_wayland_seat_priv_get_version_id()) {
    case 0: ((struct _GdkWaylandSeat_v3_0_0*)self)->grab_cursor = grab_cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_WAYLAND_SEAT_PRIV_H
