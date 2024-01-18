# CMakeLists.txt
cmake_minimum_required(VERSION 3.16...3.21)
project(G4Muography)

# Add the path to the directory containing MyGeant4Project.cc
# Replace "/path/to/your/repository" with the actual path
#add_subdirectory(/Users/burkanbereketoglu/G4MuonTomography/ MyGeant4Project)

# (2)
option(WITH_GEANT4_UIVIS "Build example with Geant4 UI and Vis drivers" ON)
if(WITH_GEANT4_UIVIS)
  find_package(Geant4 REQUIRED ui_all vis_all)
else()
  find_package(Geant4 REQUIRED)
endif()

# (3)
include(${Geant4_USE_FILE})
include_directories(${PROJECT_SOURCE_DIR}/include)

# (4)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)

# (5)
add_executable(G4MuographyExe G4Muography.cc ${sources} ${headers})
target_link_libraries(G4MuographyExe ${Geant4_LIBRARIES})

# (6)
set(EXAMPLEMyGeant4Project_SCRIPTS
  #exampleESSnuSBpSim.in
  #exampleESSnuSBpSim.out
  init.mac
  #run1.mac
  #run2.mac
  vis.mac
  run.mac
  GaussianGPS.mac
  )

foreach(_script ${EXAMPLEMyGeant4Project_SCRIPTS})
  configure_file(
    ${PROJECT_SOURCE_DIR}/${_script}
    ${PROJECT_BINARY_DIR}/${_script}
    COPYONLY
    )
endforeach()

# (7)
install(TARGETS G4MuographyExe DESTINATION bin)
