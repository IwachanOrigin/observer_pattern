
set(MAIN_SRC
  main.cpp
  digitobserver.cpp
  digitobserver.h
  graphobserver.cpp
  graphobserver.h
  numbergenerator.cpp
  numbergenerator.h
  observer.cpp
  observer.h
  randomnumbergenerator.cpp
  randomnumbergenerator.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

