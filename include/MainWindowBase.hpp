#ifndef MAINWINDOWBASE_HPP
#define MAINWINDOWBASE_HPP

#include <QDir>
#include <QUrl>

class QMenuBar;
class QMenu;
class QStatusBar;
class QToolBar;
class QMainWindow;
class PluginsManager;

class MainWindowBase
{
public:
    virtual QMenu*          fileMenu()        const=0;
    virtual QMenu*          newDocumentMenu() const=0;
    virtual QMenu*          editMenu()        const=0;
    virtual QMenu*          helpMenu()        const=0;
    virtual QMenu*          viewMenu()        const=0;
    virtual QMenuBar*       menuBar()         const=0;
    virtual QStatusBar*     statusBar()       const=0;
    virtual QToolBar*       toolBar()         const=0;
    virtual QMainWindow*    mainWindow()      const=0;
    virtual PluginsManager* pluginsManager()  const=0;
    virtual QDir            engineDataPath()  const=0;
    virtual QUrl            engineExecutable()const=0;
};

#endif // MAINWINDOWBASE_HPP
