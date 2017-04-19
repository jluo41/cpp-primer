# CH_II Variables and Built-in Type

## 1. 基本内置变量

arithmetic type

void

### 1.1 arithmetic Type

---

`bool`

---

`char`

`wchar_t`     *width char type*

`char16_t`

`char32_t`

---

`short`

`int`

`long`

`long long`

---

`float`

`double`

`long double`

---


### signed and unsigned

By default, `int`, `short`, `long`, `long long` are all signed, can represent positive, negative, and zero

To present only nature numbers, use unsigned

`unsigned long`

`unsigned int`


**Char**

`char`

`signed char`

`unsigned char`

**Principles**

1. Definitely not negative, use `unsigned`.

2. If out of `int` scope, use `long long`.

3. Arithmetic Expression, avoid `bool`, `char`.

4. Float number, use `double`.

### 1.2 Convert Data Type

```C++
bool b = 42;

int i = b;

i = 3.14;

double pi = i;

// suppose char is 8 bits, c is 225
unsigned char c = -1;

// suppose char is 8 bits, c is undefined.
// 栈溢出.
signed char c2 = 256;
```
#### Expression with `unsigned`

### 1.3 literal char 字面值常量

一个形如42的值被称作字面值常量。

20: 十进制

024: 八进制

0x14: 十六进制

#### char and string

'a'  //char literal

"Hello World!" //string literal

#### `escape sequence` 转义序列

`\n`: next line.

`\t`: tabulate

`a`: alarm

```C++
std::out << '\n';
std::cout << "\tHi!\n";
```

#### Boolean and Pointer literal

`true` and `false` are literals of type `bool`:

```C++
bool test = false;
```

`nullptr` is a pointer literal.

## 2 Variables

A **variable** provides us with named storage that our programs can manipulate.

### 2.1 Variable Definitions

```C++
// int
int sum = 0, value, units_sold = 0;

// item is an object of Sales_item.
Sales_item item;

//string is a library type; represent a variable-length sequence of character

//book 通过一个string字面值 初始化
std::string book("0-201-78345-X");
```

#### 初始值 Initializers

```C++
double price = 109.99, discount = price * 0.16;

//function return a double
double salePrice = applyDiscount(price, discount);

```

Initialization is not assignment.

Initialization happens when a variable is given a value when it is created.

Assignment obliterates an object's current value and replaces that value with a new one.

#### List Initialization

Four different ways to define an `int` variable named `units_sold` and initialize it to 0;


```C++
int units_sold = 0;
int units_sold = {0};
int units_sold{0};
int units_sold(0);
```

#### Default Initialization

```C++
std::string empty;
Sales_item item;
```

---
Caution: Uninitialized Variables Cause Run-Time Problems
---

An uninitialized variable has an indeterminate value.

### 2.2 变量声明和定义

To obtain a declaration that is not also a definition, use `extern` keyword

```C++
//declares but does not define i
extern int i;

//declares and define i
int j;

//Definitions
extern double pi = 3.1416;
```

In a **function**, it is an error to provide an initializer on an extern.

---

Variables must be defined exactly once but can be declared many times.

---

### 2.3 Identifiers 表示符

```C++
int somename, someName, SomeName, SOMENAME;
```

#### Conventions for Variable Names

* Identifiers give some indiction of its meaning.

* Variable names, lowercase -`index`.

* Class names, `Sales_item`.

* Multiple words, `student_loan`, `studentLoan`.

#### Keywords

### 2.4 Scope of a Name

Scope is a part of program. Seperated by `{}`.

```C++
#include <iostream>

int main()
{
  int sum = 0;
  for (int val = 1; val <= 10; ++val)
    sum += val;
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}
```

`global scope`

`block scope`

`val` is defined with `for`, it cannot used elsewhere in `main`.

---

Define variables when you first use them.

---


#### Nested Scopes

`::reused`

## 2.3 Compound Types



## 6 Defining Our Own Data Structure.

Class

Data

operation


### 6.1 Defining the `Sales_data` type

using `struct`

class names

class body

semicolon ;

Initialization

```C++

struct Sales_data {} accum, trans, *salesptr;

struct Sales_data {};

Sales_data accum, trans, *salesptr;
```

#### Class Data Members

`in-class initializer`
