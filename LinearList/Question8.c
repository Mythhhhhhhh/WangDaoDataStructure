LinkList Search_1st_Common(LinkList L1, LinkList L2) {
	//本算法实现在线性的时间内找到两个单链表的第一个公共结点
	int len1 = Length(L1), len2 = Length(L2);//计算两个链表的表长
	LinkList longList, shortList;//分别指向表长较长的和较短的链表
	if (len1 > len2) {
		longList = L1->next;
		shortList = L2->next;
		dist = len1 - len2;//表长之差
	}
	else {
		longList = L2->next;
		shortList = L1->next;
		dist = len2 - len1;//表长之差
	}
	while (dist--)//表长的链表先遍历到第dist个结点,然后同步
		longList = longList->next;
	while (longList != NULL) {//同步寻找共同结点
		if (longList == shortList)
			return longList;
		else {//继续同步寻找
			longList = longList->next;
			short = short->next;
		}
	}//while
	return NULL;
}