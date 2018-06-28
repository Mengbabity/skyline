# skyline

问题：给出轮廓的坐标。

用到的关键数据结构：C++的priority_queue，本质是堆结构。priority_queue<Type, Container, Functional>，分别为数据类型，保存数的容器，还有比较方式。
本题用到的数据类型是pair，优先级默认用first元素降序排列，first相等则用second降序排列。
