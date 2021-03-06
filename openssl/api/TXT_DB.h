/* Copyright (C) Rong Tao @Sylincom Beijing, 2020年 01月 16日 星期四 19:43:02 CST. */
typedef struct txt_db_st
{
    int num_fields;
    STACK *data;
    LHASH **index;
    int (**qual)(char **);
    long error;
    long arg1;
    long arg2;
    char **arg_row;
} TXT_DB;

//Openss 实现了一个简单的文本数据库，它可以从文件读取数据和将数据写到文件中，
//并且可以根据关键字段来查询数据。Openssl 的文本数据库供apps/目录下的文件调用，比如
//apps.c、ca.c 和ocsp.c。openssl 文本数据库典型的例子为apps/demoCA/index.txt。文本数据
//库一行代表数据库的一行，各个列之间必须用一个\t 隔开，用#进行注释(#必须在开始位置)，
//以空行结束。比如下面的例子：
//赵春平 28 湖北
//zcp 28 荆门
//文本数据库的查找用到了哈希表。openssl 读取的所有行数据存放在堆栈中，并为每一
//列数据建立一个单独的哈希表。每个哈希表中存放了所有行数据的地址。查询时，用户指定
//某一列，openssl 根据对应的哈希表进行查找。

//num_fields：表明文本数据库的列数。
//data：用来存放数据，每一行数据组织成为一个字符串数组(每个数组值对应该行的一
//        列)， 并将此数组地址 push 到堆栈中。
//index：哈希表数组，每一列对应一个哈希表。每一列都可以建哈希表，如果不建哈希
//        表将不能查找该列数据。
//qual：一个函数地址数组，数组的每个元素对应一列，进行插入该列哈希表前的过滤。
//        这些函数用于判断一行数据的一列或者多列是否满足某种条件，如果满足将不能插入到
//        哈希表中去(但是能存入堆栈)。每一列都可以设置一个这样的函数。这些函数由用户实
//        现。比如，一个文本数据库中，有名字列和年龄列，并且要求名字长度不能小于2，年
//        龄不能小于0 和大于200。用户为名字列实现了一个qual 函数，只用来检查名字长度，
//        对于年龄列实现一个qual 函数，只用来检查年龄。当用户要插入一条记录，名字长度
//        为1，但是年龄合法，那么该记录能插入到年龄列对应的哈希表中，而不能插入名字列
//        对应的哈希表。
//error、arg1、arg2 和arg_row 用于存放错误信息。


