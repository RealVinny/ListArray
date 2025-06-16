cmake_minimum_required(VERSION 3.15)
project(VDSKit C)

# Defina padrão de C
set(CMAKE_C_STANDARD 99)

# Inclui headers
include_directories(include)

# Adiciona todos os arquivos .c de src/
file(GLOB_RECURSE SOURCES "src/**/*.c")

# Cria a biblioteca estática
add_library(vdskit STATIC ${SOURCES})

# Compila o executável de teste
add_executable(testing testing.c)
target_link_libraries(testing vdskit)

# Exibe mensagem pós-compilação
message(STATUS "VDSKit configurado. Executável: testing, Biblioteca: vdskit")
