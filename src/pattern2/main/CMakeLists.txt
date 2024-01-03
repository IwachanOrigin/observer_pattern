
set(MAIN_SRC
  digitobserver.cpp
  digitobserver.h
  graphobserver.cpp
  graphobserver.h
  main.cpp
  randomnumbergenerator.cpp
  randomnumbergenerator.h
  observer.h
  subject.cpp
  subject.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)


