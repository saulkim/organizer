// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef organizerfluid_h
#define organizerfluid_h
#include <FL/Fl.H>
#include <iostream>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Input.H>

class mainGUI {
public:
  Fl_Double_Window* createWindow();
  Fl_Double_Window *mainWindow;
  Fl_Menu_Bar *menuBar;
  static Fl_Menu_Item menu_menuBar[];
  static Fl_Menu_Item *menuFile;
  static Fl_Menu_Item *menuOptions;
  static Fl_Menu_Item *menuHelp;
  Fl_Group *toolbar;
  Fl_Button *todoBtn;
  Fl_Button *lastSinceBtn;
  Fl_Button *batteryBtn;
  Fl_Button *mysterySurpriseBtn;
  Fl_Button *fanSpeedBtn;
  Fl_Progress *progressBar;
  Fl_Group *consoleWindow;
  Fl_Group *todoBox;
  Fl_Group *LastSinceBox;
  Fl_Group *tagGroup;
  Fl_Group *gearBox;
  Fl_Button *lsGearBoxBtn;
  Fl_Group *tagCheckBoxGroup;
  Fl_Group *outputView;
  Fl_Group *centerView;
  Fl_Group *refreshBtnGroup;
  Fl_Button *lsUpdateBtn;
  Fl_Group *longestLastSinceEntry;
  Fl_Group *allLastSinceEntriesGroup;
  Fl_Group *editView;
  Fl_Group *lsAddEntryGroup;
  Fl_Input *lsEntryTextInput;
  Fl_Button *lsEntryTextInputBtn;
  Fl_Group *lastSinceFileReadingErrorGroup;
  Fl_Group *batteryBox;
  Fl_Group *fanSpeedBox;
  static void todoShow_cb(Fl_Widget* obj, void* p);
  static void lastSinceShow_cb(Fl_Widget* obj, void* p);
  static void batteryShow_cb(Fl_Widget* obj, void* p);
  static void lsUpdateBtn_cb(Fl_Widget* obj, void* p);
  static void fanSpeedShow_cb(Fl_Widget* obj, void* p);
  static void lsGearBoxBtn_cb(Fl_Widget* obj, void* p);
  static void lsEntryTextInputBtn_cb(Fl_Widget* obj, void* p);
};
#endif