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

* 全局变量
* 局部变量：同名时，局部变量优先

  * `scanf`: 从标准输入中获取

    ```c
    printf("请输入两个数字：");
    scanf("%d %d", &a, &b);  // 1 2
    printf("%d", a+b);  // 3
    ```


