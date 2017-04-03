#include <gtk/gtk.h>
// Tue Nov 25 23:47:06 EST 2014 

// for raspberry pi

// compile with $ gcc -Wall -g -o testGlade test.c `pkg-config --cflags --libs gtk+-3.0`

// gcc -Wall -g -o testglade1 testglade1.c $(pkg-config --cflags gtk+-3.0) $(pkg-config   --libs gtk+-3.0)

int main(int argc, char *argv[])
{
    GtkBuilder *gtkBuilder;
    GtkWidget *window;
    gtk_init(&argc, &argv);
    
    gtkBuilder = gtk_builder_new();
    gtk_builder_add_from_file(gtkBuilder, "/home/mikeh/RPiGlade1/glademjh1.glade", NULL);  // hardcode a full path
    window = GTK_WIDGET(gtk_builder_get_object(gtkBuilder, "mywindow"));
    
    g_object_unref(G_OBJECT(gtkBuilder));
    gtk_widget_show(window);
    gtk_main();
    
    return 0;
}
