# VDSKit

Biblioteca em C focada em **estruturas de dados básicas e genéricas** — atualmente com:

- ✅ *ArrayList* (lista dinâmica baseada em array)  
- 🔗 *Singly Linked List* (lista encadeada simples)

Projeto sob licença **GPL‑3.0**, desenvolvido por Vinicius Pinheiro (RealVinny).

---

## 🛠 Funcionalidades

### 1. ArrayList (`array.*`)
- Criação e destruição de listas
- Inserção no fim (`push_back`)
- Remoção do fim (`pop_back`)
- Acesso por índice (`get_at`)
- Consulta do tamanho (`size`)
- Impressão para debug (`print_array`)

### 2. Singly Linked List (`sll_*`)
- Inicialização com tamanho de dado genérico (`sll_init(size_t data_size)`)
- Inserção no início/fim (`sll_push_front`, `sll_push_back`)
- Inserção/remocão em posição específica (`sll_insert_at`, `sll_remove_at`)
- Remoção no início/fim da lista (`sll_pop_front`, `sll_pop_back`)
- Busca de valor (`sll_find_first`, `sll_find_last`)
- Acesso por posição (`sll_get_at`)
- Liberação da lista inteira (`sll_free`)
- Impressão para visualização (`sll_print`)
- Consulta do tamanho (`sll_size`)

---

## ✅ Por que usar o vdsKit?

- 📦 **Tudo em C puro** — sem dependências externas.
- 🧩 **Genérico** — tipos definidos só no momento da criação.
- 🛡 **GPL‑3.0** — garante liberdade de uso e colaboração com mantida da licença.
- 💻 **Ideal para aprendizado e projetos técnicos** — especialmente se manusear ponteiros e estrutura de dados.

---

## 🚀 Exemplo rápido

### Criando um array de `int`:
```c
ArrayList arr;
array_init(&arr, sizeof(int));
int x = 42;
array_push_back(&arr, &x);
printf("%d\n", *(int*)array_get_at(&arr, 0));
array_free(&arr);
```

### Criando uma linked list de `char*`:
```c
singleLinkedList list;
sll_init(&list, sizeof(char*));
char* s = strdup("Vinny");
sll_push_front(&list, &s);
sll_print(&list);
sll_free(&list);
free(s);  // liberação do dado alocado
```

---

## 🧱 Estrutura do projeto

```
vdsKit/
├── include/
│   ├── vdsKit.h        ← header principal
│   ├── array.h
│   └── sll.h
├── src/
│   ├── array.c
│   └── sll.c
├── test/
│   ├── test_array.c
│   └── test_sll.c
├── CMakeLists.txt
├── README.md
└── LICENSE
```

---

## 🎟 Como compilar e testar

```bash
mkdir build && cd build
cmake ..
make
./test_array       # testa array
./test_sll         # testa listas encadeadas
```

---

## 🧩 Contribuindo

- Use git flow: `dev`, `sll`, `array`, `release`...
- Faça PRs e escreva testes para novas funções
- Mantenha o estilo e a documentação padrão

---

## 📝 Sobre Licença

Este projeto é licenciado sob **GPL‑3.0**. Isso significa:
- Pode usar, modificar e redistribuir
- Obras derivadas devem permanecer livres e com GPL‑3.0
- Cópia da licença legalmente vinculante incluída em `LICENSE`

---

## ✅ Próximos passos

- Suporte à **Doubly Linked List**
- Implementação de **Stack** e **Queue**
- Adição de **ordenadores** e **filtros genéricos**
- Suporte a **macros ou `_Generic`** para maior segurança de tipo

---

### 🎯 Conflito anterior: ListArray

Seu repositório anterior **ListArray** foi incorporado como parte do módulo `array` do vdsKit. O foco agora é oferecer uma lib completa e unificada de estrutura de dados.

### Certificações : 
[![CodeQL Advanced](https://github.com/RealVinny/VDSKit/actions/workflows/codeql.yml/badge.svg?branch=main)](https://github.com/RealVinny/VDSKit/actions/workflows/codeql.yml)
