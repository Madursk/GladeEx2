//Main.C
#include <gtk/gtk.h>
GtkWindow *window;
GtkBox    *box;
GtkImage  *logo;
GtkFrame  *frame;
GtkAlignment *alignment;
GtkPaned     *paned;
 
int main(int argc, char *argv[])
{
    GtkBuilder      *builder; 
    
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "window_main.glade", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);
    
    box = GTK_WIDGET(gtk_builder_get_object(builder, "pMainBox"));
    
     logo= GTK_WIDGET(gtk_builder_get_object(builder, "pVerifyCard"));
     frame= GTK_WIDGET(gtk_builder_get_object(builder, "pInfoContainer"));
     alignment= GTK_WIDGET(gtk_builder_get_object(builder, "pAlignment"));
     paned= GTK_WIDGET(gtk_builder_get_object(builder, "pPaned"));
     
    g_object_unref(builder);
 
    gtk_widget_show(window);                
    gtk_main();
 
    return 0;
}
 
// called when window is closed
void on_window_main_destroy()
{
    gtk_main_quit();
}
