# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/burkanbereketoglu/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/burkanbereketoglu/project/build

# Include any dependencies generated for this target.
include CMakeFiles/MyGeant4Executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyGeant4Executable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGeant4Executable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGeant4Executable.dir/flags.make

CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o: /Users/burkanbereketoglu/project/MyGeant4Projects.cc
CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o -MF CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o -c /Users/burkanbereketoglu/project/MyGeant4Projects.cc

CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/MyGeant4Projects.cc > CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.i

CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/MyGeant4Projects.cc -o CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.s

CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o: /Users/burkanbereketoglu/project/src/DetectorConstruction.cc
CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o -c /Users/burkanbereketoglu/project/src/DetectorConstruction.cc

CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/DetectorConstruction.cc > CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.i

CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/DetectorConstruction.cc -o CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.s

CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o: /Users/burkanbereketoglu/project/src/EventAction.cc
CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o -c /Users/burkanbereketoglu/project/src/EventAction.cc

CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/EventAction.cc > CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.i

CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/EventAction.cc -o CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.s

CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o: /Users/burkanbereketoglu/project/src/PhysicsList.cc
CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o -c /Users/burkanbereketoglu/project/src/PhysicsList.cc

CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/PhysicsList.cc > CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.i

CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/PhysicsList.cc -o CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.s

CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o: /Users/burkanbereketoglu/project/src/PrimaryGeneratorAction.cc
CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o -c /Users/burkanbereketoglu/project/src/PrimaryGeneratorAction.cc

CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/PrimaryGeneratorAction.cc > CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.i

CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/PrimaryGeneratorAction.cc -o CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.s

CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o: /Users/burkanbereketoglu/project/src/RunAction.cc
CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o -c /Users/burkanbereketoglu/project/src/RunAction.cc

CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/RunAction.cc > CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.i

CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/RunAction.cc -o CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.s

CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o: CMakeFiles/MyGeant4Executable.dir/flags.make
CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o: /Users/burkanbereketoglu/project/src/SteppingAction.cc
CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o: CMakeFiles/MyGeant4Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o -MF CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o.d -o CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o -c /Users/burkanbereketoglu/project/src/SteppingAction.cc

CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/burkanbereketoglu/project/src/SteppingAction.cc > CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.i

CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/burkanbereketoglu/project/src/SteppingAction.cc -o CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.s

# Object files for target MyGeant4Executable
MyGeant4Executable_OBJECTS = \
"CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o" \
"CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o"

# External object files for target MyGeant4Executable
MyGeant4Executable_EXTERNAL_OBJECTS =

MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/MyGeant4Projects.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/DetectorConstruction.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/EventAction.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/PhysicsList.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/PrimaryGeneratorAction.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/RunAction.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/src/SteppingAction.cc.o
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/build.make
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4Tree.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4FR.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4GMocren.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4visHepRep.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4RayTracer.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4VRML.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4ToolsSG.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4OpenGL.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4visQt3D.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4vis_management.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4modeling.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4interfaces.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4mctruth.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4geomtext.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4gdml.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4error_propagation.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4readout.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4physicslists.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4run.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4event.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4tracking.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4parmodels.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4processes.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4digits_hits.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4track.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4particles.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4geometry.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4materials.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4graphics_reps.dylib
MyGeant4Executable: /Library/Developer/CommandLineTools/SDKs/MacOSX14.2.sdk/System/Library/Frameworks/OpenGL.framework
MyGeant4Executable: /opt/homebrew/Cellar/qt@5/5.15.12/lib/QtOpenGL.framework/QtOpenGL
MyGeant4Executable: /opt/homebrew/Cellar/qt@5/5.15.12/lib/QtWidgets.framework/QtWidgets
MyGeant4Executable: /opt/homebrew/Cellar/qt@5/5.15.12/lib/QtGui.framework/QtGui
MyGeant4Executable: /opt/homebrew/Cellar/qt@5/5.15.12/lib/QtCore.framework/QtCore
MyGeant4Executable: /opt/homebrew/Cellar/xerces-c/3.2.5/lib/libxerces-c.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4analysis.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4expat.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4zlib.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4intercoms.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4global.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4clhep.dylib
MyGeant4Executable: /Users/burkanbereketoglu/geant4-v11.2.0-install/lib/libG4ptl.2.3.3.dylib
MyGeant4Executable: CMakeFiles/MyGeant4Executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/burkanbereketoglu/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable MyGeant4Executable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyGeant4Executable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGeant4Executable.dir/build: MyGeant4Executable
.PHONY : CMakeFiles/MyGeant4Executable.dir/build

CMakeFiles/MyGeant4Executable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyGeant4Executable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyGeant4Executable.dir/clean

CMakeFiles/MyGeant4Executable.dir/depend:
	cd /Users/burkanbereketoglu/project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/burkanbereketoglu/project /Users/burkanbereketoglu/project /Users/burkanbereketoglu/project/build /Users/burkanbereketoglu/project/build /Users/burkanbereketoglu/project/build/CMakeFiles/MyGeant4Executable.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyGeant4Executable.dir/depend

