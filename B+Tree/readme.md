# B+ Tree

B+树是一种树数据结构，通常用于数据库和操作系统的文件系统中。

## 基本要求

* 你需要将数据保存在**外存**中（键值对保存在内存中将无法通过测试）
* 实现B+树的一些操作，如：插入、修改、查询、清空

## Bonus

* 实现B+树的删除操作
* 实现迭代器以及迭代器相关的函数
* 最高可以得到20分

## 接口说明

* 构造函数（默认文件名）

  ` BTree()` 

* 构造函数（指定文件名）

  `BTree(const char *fname)`

* 析构函数

  `~BTree()`

* 清空

  `void clear()`

  清空B+树中存储的数据

* 插入

  `bool insert(const Key &key, const Value &value)`

  插入成功返回true，失败返回false。

  若key存在，则什么都不做。

* 修改

  `bool modify(const Key &key, const Value &value)`

  修改成功返回true，失败返回false。

* 查询

  `Value at(const Key &key)`

  返回key所对应的value，若key不存在，返回default，即Value()

* 删除

  `bool erase(const Key &key)`

  删除成功返回true，失败返回false。

* 查询（返回迭代器）

  `iterator find(const Key &key)`

* 查询（返回第一个指向大于等于key的迭代器）

  `iterator lower_bound(const Key &key)`

---

## 建议

* B+树原理并不复杂，英文Wikipedia上写的比较清楚，基本看完就差不多了

* B+树可视化：https://www.cs.usfca.edu/~galles/visualization/BPlusTree.html

* 文件读写是个难点，可以使用C语言的文件读写方式

* 如果不熟悉文件读写，可以先写一个存在内存的B+树，保证自己写的是对的，再改成存在外存的B+树

* 调试的时候，可以修改B+树节点的大小（改小可以方便调试），可以自己编写B+树测试

* 可以参考一下《数据库系统概念》11.3节上面的伪代码，书上伪代码有些typos