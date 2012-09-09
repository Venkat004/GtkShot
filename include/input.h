/*
 * GtkShot - A screen capture programme using GtkLib
 * Copyright (C) 2012 flytreeleft @ CrazyDan
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _GTK_SHOT_INPUT_H_
#define _GTK_SHOT_INPUT_H_

#include <gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _GtkShotInput GtkShotInput;

#define GTK_SHOT_INPUT(obj) ((GtkShotInput*) obj)

struct _GtkShotInput {
  GtkWindow *window;
  GtkTextView *view;
};

GtkShotInput* gtk_shot_input_new(GtkShot *shot);
void gtk_shot_input_destroy(GtkShotInput *input);
void gtk_shot_input_show_at(GtkShotInput *input, gint x, gint y);
void gtk_shot_input_hide(GtkShotInput *input);
gboolean gtk_shot_input_visible(GtkShotInput *input);
#define gtk_shot_input_visible(input) \
        ((input) && gtk_widget_get_visible(GTK_WIDGET((input)->window)))
void gtk_shot_input_set_font(GtkShotInput *input
                                  , const char *fontname
                                  , gint color);
gchar* gtk_shot_input_get_text(GtkShotInput *input);

#ifdef __cplusplus
}
#endif

#endif
