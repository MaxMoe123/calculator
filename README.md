(english Version below)
# Taschenrechner

## Überblick
Bei diesem Programm handelt es sich um einen Taschenrechner mit Grafischer Benutzeroberfläche.
Der Taschenrechner ermöglicht es dem Benutzer eine Rechenoperation auf zwei Zahlen auszuführen.
Dabei hat der Benutzer die Wahl zwischen Addition, Subtraktion, Multipikation und Division.


## Installation und Ausführung
Vergewissern Sie sich, dass C++ Standard 17 und CMAKE VERSION 3.16 oder höher installiert ist.
Außerdem benötigen Sie für die Ausführung CopperSpice mit einigen Bibliotheken und Binaries.

1. **Bibliotheken herunterzuladen:**
Um die nötigen Bibliotheken herunterzuladen, klicken Sie bitte auf folgdenden Link.
`https://www.copperspice.com/docs/cs_overview/requirements-unix.html#unix-packages`
achten Sie dabei darauf, welche Ubunu Version Sie installiert haben.
Befehl um Version auszulesen: `lsb_release -a`

2. **Binaries herunterzuladen:**
Um die nötigen Binaries herunterzuladen, klicken Sie bitte auf folgdenden Link.
`https://download.copperspice.com/copperspice/binary/cs-1.9/`
Kopieren Sie mit rechtsklick die Adresse der Datei, achten Sie dabei auch auf die korrekte Version.
Laden Sie diese mit `curl -o *link*` herunter, erstellen Sie ein neun Ordner und entpacken die Datei
mit `tar -xvjf *datei* -c *ordner*`.

3. **Klonen Sie das Repository:**
`git clone git@github.com:MaxMoe123/calculator.git`

4. **Wechseln Sie in das Verzeichnis:**
`cd calculator`

5. **Erstellen Sie ein Build-Verzeichnis und wechseln Sie hinein:**
`mkdir build && cd build`

6. **Konfigurieren Sie das Projekt mit CMake:**

`cmake -DCMAKE_PREFIX_PATH=/*Pfad der CopperSpice Bibliotheken*/..`

z.B. `cmake -DCMAKE_PREFIX_PATH=/home/user/cs_demo/copperspice_lib/lib/cmake/CopperSpice/..`

8. **Kompilieren Sie das Projekt:**
`cmake --build .`

9. **Deploy Ordner erstellen**
`cmake --install . --prefix=deploy`

10. **In deploy wechseln**
`cd deploy`

11. **Führen Sie das Programm aus:**
`./calculator`

## Verwendung
Nach Start des Programms, öffnet sich ein Fesnster.
Jetzt kann der Benutzer die erste Zahl eingeben.
Anschließend eine Rechenoperation auswählen und danach die zweite Zahl eingeben.
Mit einem Klick auf der Gleichheitszeichen (=) wird das Ergebnis der Operation angezeigt.
Für eine neue Rechnung muss die Löschtaste (C) betätigt werden.

## Hinweise
Es können nur Rechenoperationen auf zwei Zahel ausfgeführt werden.
Bei dem Versuch mehrere Zahlen einzugeben, wird die Rechenoperation nur auf auf die 
letzten beiden Zahlen ausgeführt.
Eine Divison durch Null löst einen Fehlercode aus.


## English Version

# Calculator

## Overview
This program is a calculator with a graphical user interface.
The calculator allows the user to perform a calculation on two numbers.
The user can choose between addition, subtraction, multiplication and division.

## Installation and execution
Make sure that C++ Standard 17 and CMAKE VERSION 3.16 or higher are installed.
You also need CopperSpice with some libraries and binaries to run it.

1. **Download libraries:**
To download the necessary libraries, please click on the following link.
`https://www.copperspice.com/docs/cs_overview/requirements-unix.html#unix-packages`
Make sure which Ubuntu version you have installed.
Command to read the version: `lsb_release -a`

2. **Download binaries:**
To download the necessary binaries, please click on the following link.

`https://download.copperspice.com/copperspice/binary/cs-1.9/`
Right-click to copy the address of the file, making sure you select the correct version.

Download it with `curl -o *link*`, create a new folder and unpack the file
with `tar -xvjf *file* -c *folder*`.

3. **Clone the repository:**
`git clone git@github.com:MaxMoe123/calculator.git`

4. **Change directory:**
`cd calculator`

5. **Create a build directory and change into it:**
`mkdir build && cd build`

6. **Configure the project with CMake:**
`cmake -DCMAKE_PREFIX_PATH=/*Path of CopperSpice libraries*/..`
e.g. `cmake -DCMAKE_PREFIX_PATH=/home/user/cs_demo/copperspice_lib/lib/cmake/CopperSpice/..`

7. **Compile the project:**
`cmake --build .`

8. **Create deploy folder**
`cmake --install . --prefix=deploy`

9. **Switch to deploy**
`cd deploy`

10. **Run the program:**
`./calculator`

## Usage
After starting the program, a window will open.
The user can now enter the first number.
Now select a calculation operation and then enter the second number.
A clicking on the equal sign (=) will displays the result of the operation.
Pressed the delete key (C) for a new calculation.

## Notes
Only two numer calculation can be performed.
If you try to enter multiple numbers, the calculation operation is only performed on the last two numbers.
Division by zero triggers an error code.
