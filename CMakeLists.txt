cmake_minimum_required(VERSION 3.15)
project(VDSKit C)

set(CMAKE_C_STANDARD 99)

# Inclui os headers públicos
include_directories(include)

# Inclui os headers internos também se necessário
include_directories(src)

# Adiciona os arquivos fonte da biblioteca
file(GLOB_RECURSE SOURCES "src/**/*.c")

# Cria a biblioteca estática
add_library(vdskit STATIC ${SOURCES})

# Instalação opcional (caso publique como pacote no futuro)
# install(TARGETS vdskit DESTINATION lib)
# install(DIRECTORY include/ DESTINATION include)