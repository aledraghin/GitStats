# creezi o librarie care contine employee.cpp si employee.hpp
add_library(JanitorLibrary janitor.cpp janitor.hpp)

# ii specifici sa includa si directorul sursa ca sa nu mai pui src/employee.hpp cand faci import
target_include_directories(JanitorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


target_link_libraries(JanitorLibrary PUBLIC HumanBeingLibrary)
target_include_directories(JanitorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../human_being)