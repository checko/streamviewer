/*           StreamViewer - A free and open transport stream viewer           */
/* ========================================================================== */
/*    Copyright © 2009 - Paulo Flabiano Smorigo - Under GNU GPL v2 License    */
/* -------------------------------------------------------------------------- */
/**
 * @file    MainWindow.cc
 * @brief   The methods of the main class of the application.
 * @author  Paulo Flabiano Smorigo <pfsmorigo@gmail.com>
 * @date    Nov 16, 2009
 *
 * $Id$
 * $URL$
 *
 */

#include "MainWindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(BaseObjectType* base_object, const Glib::RefPtr<Gnome::Glade::Xml>& glade_xml) :	Gtk::Window(base_object)
{

}

MainWindow::~MainWindow()
{
}

void MainWindow::on_btnOpen_clicked()
{
	cout << "Clicked" << endl;
}