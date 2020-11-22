# QT-Creator

/ **steps to create Basic QT application**/

1. open Qt project-> Goto file ->Newfile/Project -> Other Project->Empty qmake Project->Give name of the project-> select kit ->finish.
2. After creating project
           Right click on project folder->Add new->c/c++ sourcefile->Give name to file with extenction".cpp" ->finish.
3. open .pro file and add some QT fields i,e
           QT += core gui
           greaterThan(QT_MAJOR_VERSION,5) : QT +=widgets.
4. open .cpp file, type or enter source code , save build and run. 

