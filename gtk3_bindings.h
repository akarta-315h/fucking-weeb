/*
 * This file is part of Fucking Weeb, and was buit from parts of
 * GTK, GDK, GLib and Pango header files by Jaume Delclòs, 2016.
 * Therefore, all the following notices apply:
 */

/*
 * GDK - The GIMP Drawing Kit
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 */

/*
 * Modified by the GTK+ Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/.
 */

/*
 * GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

/*
 * Pango
 * Copyright (C) 1999 Red Hat Software
 */

/*
 * Fucking Weeb
 * Copyright © Jaume Delclòs Coll

 * This file is part of Fucking Weeb.
 *
 * Fucking Weeb is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fucking Weeb is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Fucking Weeb.  If not, see <http://www.gnu.org/licenses/>.
 */

typedef enum
{
  G_APPLICATION_FLAGS_NONE,
  G_APPLICATION_IS_SERVICE  =          1,
  G_APPLICATION_IS_LAUNCHER =          2,

  G_APPLICATION_HANDLES_OPEN =         4,
  G_APPLICATION_HANDLES_COMMAND_LINE = 8,
  G_APPLICATION_SEND_ENVIRONMENT    =  16,

  G_APPLICATION_NON_UNIQUE =           32,

  G_APPLICATION_CAN_OVERRIDE_APP_ID =  64
} GApplicationFlags;

typedef enum
{
  GDK_WINDOW_TYPE_HINT_NORMAL,
  GDK_WINDOW_TYPE_HINT_DIALOG,
  GDK_WINDOW_TYPE_HINT_MENU,		/* Torn off menu */
  GDK_WINDOW_TYPE_HINT_TOOLBAR,
  GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,
  GDK_WINDOW_TYPE_HINT_UTILITY,
  GDK_WINDOW_TYPE_HINT_DOCK,
  GDK_WINDOW_TYPE_HINT_DESKTOP,
  GDK_WINDOW_TYPE_HINT_DROPDOWN_MENU,	/* A drop down menu (from a menubar) */
  GDK_WINDOW_TYPE_HINT_POPUP_MENU,	/* A popup menu (from right-click) */
  GDK_WINDOW_TYPE_HINT_TOOLTIP,
  GDK_WINDOW_TYPE_HINT_NOTIFICATION,
  GDK_WINDOW_TYPE_HINT_COMBO,
  GDK_WINDOW_TYPE_HINT_DND
} GdkWindowTypeHint;

typedef enum
{
  GTK_ORIENTATION_HORIZONTAL,
  GTK_ORIENTATION_VERTICAL
} GtkOrientation;

typedef enum
{
  GTK_BUTTONBOX_SPREAD = 1,
  GTK_BUTTONBOX_EDGE,
  GTK_BUTTONBOX_START,
  GTK_BUTTONBOX_END,
  GTK_BUTTONBOX_CENTER,
  GTK_BUTTONBOX_EXPAND
} GtkButtonBoxStyle;

typedef char   gchar;
typedef short  gshort;
typedef long   glong;
typedef int    gint;
typedef gint   gboolean;

typedef unsigned char   guchar;
typedef unsigned short  gushort;
typedef unsigned long   gulong;
typedef unsigned int    guint;

typedef float   gfloat;
typedef double  gdouble;

GtkApplication* gtk_application_new
(const gchar *application_id, GApplicationFlags flags);

void
gtk_init (int *argc,
          char ***argv);

___safe void
gtk_main (void);

void
gtk_main_quit (void);

typedef enum
{
  GTK_WINDOW_TOPLEVEL,
  GTK_WINDOW_POPUP
} GtkWindowType;

GtkWidget *
gtk_window_new (GtkWindowType type);

int g_signal_connect(void *, char *, void *, void *);
int g_signal_connect_swapped(void *, char *, void *, void *);

guint
g_timeout_add (guint interval,
               void * function,
               void * data);

guint
g_timeout_add_seconds (guint interval,
                       void * function,
                       void * data);

gboolean
g_source_remove (guint tag);

___safe int g_application_run
(GApplication *application, int argc, char **argv);

GtkWidget* gtk_application_window_new
(GtkApplication* application);

void gtk_widget_show_all (GtkWidget* widget);

void gtk_window_set_type_hint
(GtkWindow* window, GdkWindowTypeHint hint);

GtkWidget *
gtk_button_box_new (GtkOrientation orientation);

void
gtk_button_box_set_layout (GtkButtonBox *widget,
                           GtkButtonBoxStyle layout_style);

void
gtk_container_add (GtkContainer *container,
                   GtkWidget *widget);

GtkWidget *
gtk_button_new_with_label (const gchar *label);

GtkWidget *
gtk_check_button_new_with_label (const gchar *label);

gboolean
gtk_toggle_button_get_active (GtkToggleButton *toggle_button);

void
gtk_toggle_button_set_active (GtkToggleButton *toggle_button,
                              gboolean active);

void
gtk_window_set_title (GtkWindow *window,
                      const gchar *title);

void
gtk_window_set_default_size (GtkWindow *window,
                             gint width,
                             gint height);

GtkWidget *
gtk_bin_get_child (GtkBin *bin);

void
gtk_widget_destroy (GtkWidget *widget);

GtkWidget *
gtk_box_new (GtkOrientation orientation,
             gint spacing);

void
gtk_box_pack_start (GtkBox *box,
                    GtkWidget *child,
                    gboolean expand,
                    gboolean fill,
                    guint padding);

void
gtk_box_pack_end (GtkBox *box,
                  GtkWidget *child,
                  gboolean expand,
                  gboolean fill,
                  guint padding);

void
gtk_box_set_center_widget (GtkBox *box,
                           GtkWidget *widget);

GtkWidget *
gtk_label_new (const gchar *str);


const gchar *
gtk_label_get_text (GtkLabel *label);

void
gtk_label_set_text (GtkLabel *label,
                    const gchar *str);

void
gtk_box_set_spacing (GtkBox *box,
                     gint spacing);

void
gtk_widget_set_margin_start (GtkWidget *widget,
                             gint margin);

void
gtk_widget_set_margin_end (GtkWidget *widget,
                           gint margin);

void
gtk_widget_set_margin_top (GtkWidget *widget,
                           gint margin);

void
gtk_widget_set_margin_bottom (GtkWidget *widget,
                           gint margin);

GtkAdjustment *
gtk_adjustment_new (gdouble value,
                    gdouble lower,
                    gdouble upper,
                    gdouble step_increment,
                    gdouble page_increment,
                    gdouble page_size);

GtkWidget *
gtk_spin_button_new (GtkAdjustment *adjustment,
                     gdouble climb_rate,
                     guint digits);

gint
gtk_spin_button_get_value_as_int (GtkSpinButton *spin_button);

GtkWidget *
gtk_entry_new (void);

GtkWidget *
gtk_grid_new (void);

void
gtk_grid_attach (GtkGrid *grid,
                 GtkWidget *child,
                 gint left,
                 gint top,
                 gint width,
                 gint height);

void
gtk_widget_set_hexpand (GtkWidget *widget,
                        gboolean expand);

void
gtk_widget_set_vexpand (GtkWidget *widget,
                        gboolean expand);

void
gtk_grid_set_column_spacing (GtkGrid *grid,
                             guint spacing);

void
gtk_grid_set_row_spacing (GtkGrid *grid,
                          guint spacing);

void
gtk_label_set_xalign (GtkLabel *label,
                      gfloat xalign);

void
gtk_label_set_yalign (GtkLabel *label,
                      gfloat yalign);

void
gtk_entry_set_text (GtkEntry *entry,
                    const gchar *text);

const gchar *
gtk_entry_get_text (GtkEntry *entry);

typedef enum
{
  GTK_ICON_SIZE_INVALID,
  GTK_ICON_SIZE_MENU,
  GTK_ICON_SIZE_SMALL_TOOLBAR,
  GTK_ICON_SIZE_LARGE_TOOLBAR,
  GTK_ICON_SIZE_BUTTON,
  GTK_ICON_SIZE_DND,
  GTK_ICON_SIZE_DIALOG
} GtkIconSize;

GtkWidget *
gtk_button_new_from_icon_name (const gchar *icon_name,
                               GtkIconSize size);

void
gtk_label_set_attributes (GtkLabel *label,
                          PangoAttrList *attrs);

typedef enum
{
  GTK_ALIGN_FILL,
  GTK_ALIGN_START,
  GTK_ALIGN_END,
  GTK_ALIGN_CENTER,
  GTK_ALIGN_BASELINE
} GtkAlign;

void
gtk_widget_set_halign (GtkWidget *widget,
                       GtkAlign align);

void
gtk_widget_set_valign (GtkWidget *widget,
                       GtkAlign align);

typedef enum
{
  GTK_BUTTONS_NONE,
  GTK_BUTTONS_OK,
  GTK_BUTTONS_CLOSE,
  GTK_BUTTONS_CANCEL,
  GTK_BUTTONS_YES_NO,
  GTK_BUTTONS_OK_CANCEL
} GtkButtonsType;

typedef enum
{
  GTK_DIALOG_MODAL               = 1,
  GTK_DIALOG_DESTROY_WITH_PARENT = 2,
  GTK_DIALOG_USE_HEADER_BAR      = 4
} GtkDialogFlags;

typedef enum
{
  GTK_MESSAGE_INFO,
  GTK_MESSAGE_WARNING,
  GTK_MESSAGE_QUESTION,
  GTK_MESSAGE_ERROR,
  GTK_MESSAGE_OTHER
} GtkMessageType;

gint
gtk_dialog_run (GtkDialog *dialog);

typedef enum
{
  GTK_RESPONSE_NONE         = -1,
  GTK_RESPONSE_REJECT       = -2,
  GTK_RESPONSE_ACCEPT       = -3,
  GTK_RESPONSE_DELETE_EVENT = -4,
  GTK_RESPONSE_OK           = -5,
  GTK_RESPONSE_CANCEL       = -6,
  GTK_RESPONSE_CLOSE        = -7,
  GTK_RESPONSE_YES          = -8,
  GTK_RESPONSE_NO           = -9,
  GTK_RESPONSE_APPLY        = -10,
  GTK_RESPONSE_HELP         = -11
} GtkResponseType;

typedef enum
{
  GTK_FILE_CHOOSER_ACTION_OPEN,
  GTK_FILE_CHOOSER_ACTION_SAVE,
  GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
  GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER
} GtkFileChooserAction;

GtkWidget *
gtk_file_chooser_button_new (const gchar *title,
                             GtkFileChooserAction action);

gchar *
gtk_file_chooser_get_filename (GtkFileChooser *chooser);

gboolean
gtk_file_chooser_set_filename (GtkFileChooser *chooser,
                               const char *filename);

gchar *
gtk_file_chooser_get_uri (GtkFileChooser *chooser);

gboolean
gtk_file_chooser_set_uri (GtkFileChooser *chooser,
                          const char *uri);

GtkFileFilter *
gtk_file_filter_new (void);

void
gtk_file_filter_set_name (GtkFileFilter *filter,
                          const gchar *name);

void
gtk_file_filter_add_mime_type (GtkFileFilter *filter,
                               const gchar *mime_type);

void
gtk_file_chooser_add_filter (GtkFileChooser *chooser,
                             GtkFileFilter *filter);

GtkWidget *
gtk_scrolled_window_new (GtkAdjustment *hadjustment,
                         GtkAdjustment *vadjustment);

GtkWidget *
gtk_viewport_new (GtkAdjustment *hadjustment,
                  GtkAdjustment *vadjustment);

GtkWidget *
gtk_search_entry_new (void);

typedef void* gpointer;

typedef struct _GList
{
  gpointer data;
  GList *next;
  GList *prev;
} GList;

void g_free (gpointer mem);
void g_list_free (GList *list);

GList *
gtk_container_get_children (GtkContainer *container);

GtkWidget *
gtk_image_new_from_file (const gchar *filename);

GdkPixbuf *
gdk_pixbuf_new_from_file_at_size (const char *filename,
                                  int width,
                                  int height,
                                  GError **error);

GtkWidget *
gtk_image_new_from_pixbuf (GdkPixbuf *pixbuf);

GtkWidget *
gtk_image_new_from_icon_name (const gchar *icon_name,
                              GtkIconSize size);

GtkWidget *
gtk_event_box_new (void);

typedef enum
{
  GDK_EXPOSURE_MASK             = 2,
  GDK_POINTER_MOTION_MASK       = 4,
  GDK_POINTER_MOTION_HINT_MASK  = 8,
  GDK_BUTTON_MOTION_MASK        = 16,
  GDK_BUTTON1_MOTION_MASK       = 32,
  GDK_BUTTON2_MOTION_MASK       = 64,
  GDK_BUTTON3_MOTION_MASK       = 128,
  GDK_BUTTON_PRESS_MASK         = 256,
  GDK_BUTTON_RELEASE_MASK       = 512,
  GDK_KEY_PRESS_MASK            = 1024,
  GDK_KEY_RELEASE_MASK          = 2048,
  GDK_ENTER_NOTIFY_MASK         = 4096,
  GDK_LEAVE_NOTIFY_MASK         = 8192,
  GDK_FOCUS_CHANGE_MASK         = 16384,
  GDK_STRUCTURE_MASK            = 32768,
  GDK_PROPERTY_CHANGE_MASK      = 65536,
  GDK_VISIBILITY_NOTIFY_MASK    = 131072,
  GDK_PROXIMITY_IN_MASK         = 262144,
  GDK_PROXIMITY_OUT_MASK        = 524288,
  GDK_SUBSTRUCTURE_MASK         = 1048576,
  GDK_SCROLL_MASK               = 2097152,
  GDK_TOUCH_MASK                = 4194304,
  GDK_SMOOTH_SCROLL_MASK        = 8388608,
  GDK_TOUCHPAD_GESTURE_MASK     = 16777216,
  GDK_TABLET_PAD_MASK           = 33554432,
  GDK_ALL_EVENTS_MASK           = 0xFFFFFE
} GdkEventMask;

void
gtk_widget_set_events (GtkWidget *widget,
                       gint events);

typedef enum
{
  GDK_ACTION_DEFAULT = 1,
  GDK_ACTION_COPY    = 2,
  GDK_ACTION_MOVE    = 4,
  GDK_ACTION_LINK    = 8,
  GDK_ACTION_PRIVATE = 16,
  GDK_ACTION_ASK     = 32
} GdkDragAction;

typedef enum {
  GTK_DEST_DEFAULT_MOTION     = 1,
  GTK_DEST_DEFAULT_HIGHLIGHT  = 2,
  GTK_DEST_DEFAULT_DROP       = 4,
  GTK_DEST_DEFAULT_ALL        = 0x07
} GtkDestDefaults;

typedef struct _GtkTargetEntry {
  gchar *target;
  guint  flags;
  guint  info;
} GtkTargetEntry;

void
gtk_drag_dest_set (GtkWidget *widget,
                   GtkDestDefaults flags,
                   const GtkTargetEntry *targets,
                   gint n_targets,
                   GdkDragAction actions);

GtkWidget *
gtk_flow_box_new (void);

typedef enum
{
  GTK_SELECTION_NONE,
  GTK_SELECTION_SINGLE,
  GTK_SELECTION_BROWSE,
  GTK_SELECTION_MULTIPLE
} GtkSelectionMode;

void
gtk_flow_box_set_selection_mode (GtkFlowBox *box,
                                 GtkSelectionMode mode);

guchar *
gtk_selection_data_get_text (const GtkSelectionData *selection_data);

void
gtk_flow_box_insert (GtkFlowBox *box,
                     GtkWidget *widget,
                     gint position);

void
gtk_widget_set_size_request (GtkWidget *widget,
                             gint width,
                             gint height);

void
gtk_label_set_line_wrap (GtkLabel *label,
                         gboolean wrap);

void
gtk_label_set_max_width_chars (GtkLabel *label,
                               gint n_chars);

GtkStyleContext *
gtk_widget_get_style_context (GtkWidget *widget);

#define GTK_STYLE_PROVIDER_PRIORITY_APPLICATION 600

void
gtk_style_context_add_provider (GtkStyleContext *context,
                                GtkStyleProvider *provider,
                                guint priority);

GtkCssProvider *
gtk_css_provider_new (void);

gboolean
gtk_css_provider_load_from_path (GtkCssProvider *css_provider,
                                 const gchar *path,
                                 GError **error);

// pango

void
pango_attr_list_unref (PangoAttrList *list);

typedef enum {
  PANGO_WEIGHT_THIN = 100,
  PANGO_WEIGHT_ULTRALIGHT = 200,
  PANGO_WEIGHT_LIGHT = 300,
  PANGO_WEIGHT_SEMILIGHT = 350,
  PANGO_WEIGHT_BOOK = 380,
  PANGO_WEIGHT_NORMAL = 400,
  PANGO_WEIGHT_MEDIUM = 500,
  PANGO_WEIGHT_SEMIBOLD = 600,
  PANGO_WEIGHT_BOLD = 700,
  PANGO_WEIGHT_ULTRABOLD = 800,
  PANGO_WEIGHT_HEAVY = 900,
  PANGO_WEIGHT_ULTRAHEAVY = 1000
} PangoWeight;

PangoAttribute *
pango_attr_weight_new (PangoWeight weight);

PangoAttribute *
pango_attr_scale_new (double scale_factor);

void
pango_attribute_destroy (PangoAttribute *attr);

void
pango_attr_list_insert (PangoAttrList *list,
                        PangoAttribute *attr);

PangoAttrList *
pango_attr_list_new (void);

void g_object_unref (void*);
