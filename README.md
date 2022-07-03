# learnc

## 一 初识c语言

### 1 数据类型

```c
char   //字符数据类型
short  //短整型
int    //整型
long   //长整型
long long  //
float  //单精度浮点数
double //双精度浮点数
// C语言有没有字符串类型？
```

* 变量占用空间（字节，byte）

    ```c
    #include <stdio.h>
    
    int main() {
        printf("%d\n", sizeof(char));   // 1 (byte)
        printf("%d\n", sizeof(short));  // 2
        printf("%d\n", sizeof(int));    // 4
        printf("%d\n", sizeof(long));   // 8
        printf("%d\n", sizeof(long long));  // 8
        printf("%d\n", sizeof(float));  // 4
        printf("%d\n", sizeof(double)); // 8
        return 0;
    }
    ```

* 使用数据类型
    
    ```c
    char ch = 'w';
    int weight = 123;
    int salary = 18000;
    ```

### 2 变量、常量

```c
#include <stdio.h>

int main() {
    // 变量类型 变量名 = 0;  推荐
    // 变量类型 变量名;      不推荐
    char ch = 'w';
    int age = 23;
    float weight = 54.3;

    printf("%c\n", ch);
    printf("%d\n", age);
    printf("%lf\n", weight);
    return 0;
}
```


* 作用域和生命周期

    * 全局变量
    * 局部变量：同名时，局部变量优先

    * `scanf`: 从标准输入中获取

    ```c
    printf("请输入两个数字：");
    scanf("%d %d", &a, &b);  // 1 2
    printf("%d", a+b);  // 3
    ```

    * 生命周期

* 常量

    * 1 字面常量
    * 2 `const` 修饰的常变量

        ```c
        const int n = 1;

        int arr[10] = {0};
        int arr2[n] = {0}; //这里是不允许的, 因为 n 还是个变量
        ```

    * 3 `define` 定义的标识符常量

        ```c
        #define MAX 1000
        ```

    * 4 枚举常量：可以一一列举

        ```c
        //性别
        enum Sex {
            MALE,  //MALE = 3 可以赋初值
            FEMALE,
            SECRET
        };
        
        int main() {
            enum Sex s = MALE;
            printf("%d\n", MALE);   //0
            printf("%d\n", FEMALE); //1
            printf("%d\n", SECRET); //2
        }
        ```

* 字符串

    字符串是由双引号括起来的一串字符

    字符数组: 数组是一组形同类型的元素

    字符串结尾的位置隐藏了一个 '\0' 字符, 这个是字符串结束的标志

    ```c
    int main() {
	    char arr1[] = "abc";
	    char arr2[] = {'a', 'b', 'c'};
	    printf("%s\n", arr1);  // abc
	    printf("%s\n", arr2);  // abc烫烫烫
	    return 0;
    }
    ```