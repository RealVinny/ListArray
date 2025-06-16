# VDSKit

A C library focused on **basic, generic data structures** — currently featuring:

- ✅ *ArrayList* (dynamic array-based list)  
- 🔗 *Singly Linked List*

Licensed under **GPL‑3.0**, developed by Vinicius Pinheiro (RealVinny).

---

## 🛠 Features

### 1. ArrayList (`array.*`)
- Creation and destruction of lists
- Append to end (`push_back`)
- Remove from end (`pop_back`)
- Indexed access (`get_at`)
- Size query (`size`)
- Debug printing (`print_array`)

### 2. Singly Linked List (`sll_*`)
- Initialization with generic data size (`sll_init(size_t data_size)`)
- Add to front/end (`sll_push_front`, `sll_push_back`)
- Insert/remove at specific position (`sll_insert_at`, `sll_remove_at`)
- Remove front/end (`sll_pop_front`, `sll_pop_back`)
- Value search (`sll_find_first`, `sll_find_last`)
- Get element at index (`sll_get_at`)
- Free entire list (`sll_free`)
- Debug print (`sll_print`)
- Size query (`sll_size`)

---

## ✅ Why use vdsKit?

- 📦 **Pure C code** — no external dependencies
- 🧩 **Generic** — data types specified only at initialization
- 🛡 **GPL‑3.0 license** — ensures freedom of use and collaboration
- 💻 **Great for learning and low-level C projects**, especially with pointers and data structures

---

## 🚀 Quick Example

### Create an `int` ArrayList:
```c
ArrayList arr;
array_init(&arr, sizeof(int));
int x = 42;
array_push_back(&arr, &x);
printf("%d\n", *(int*)array_get_at(&arr, 0));
array_free(&arr);

```

### Create a char* Singly Linked List:
```c
singleLinkedList list;
sll_init(&list, sizeof(char*));
char* s = strdup("Vinny");
sll_push_front(&list, &s);
sll_print(&list);
sll_free(&list);
free(s);  // free the actual string

```


---

🧱 Project Structure

vdsKit/
├── include/
│   ├── vdsKit.h      ← Main umbrella header
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

---

🎟 Build and Test

mkdir build && cd build
cmake ..
make
./test_array   # runs array tests
./test_sll     # runs singly linked list tests


---

🧩 Contributing

Use branches like dev, sll, array, release

Submit PRs with new functions & tests

Follow existing style and documentation guidelines



---

📝 License

This project is licensed under GPL‑3.0, which means:

Free to use, modify, and redistribute

Any derivative works must remain GPL‑3.0

Full license text included in LICENSE



---

✅ What's Next

Add support for Doubly Linked List

Implement Stack and Queue

Add generic sorters/filters

Consider using macros or _Generic for more type safety



---

🎯 On Legacy Projects

Your previous project, ListArray, has been merged into the array module of vdsKit. Going forward, vdsKit will offer a unified, full-featured data-structure library.

---
