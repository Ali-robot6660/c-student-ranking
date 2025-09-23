cmake_minimum_required(VERSION 3.10)

# Название проекта
project(RangStudents C)

# Указываем стандарт языка C
set(CMAKE_C_STANDARD 99)

# Добавляем исполняемый файл
add_executable(RangStudents
    main.c
    RangFunction.c
)
