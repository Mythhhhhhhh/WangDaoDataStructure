/*
算法思想:采用直接插入排序算法的思想,先构成只含一个数据结点的有序单链表,然后依次扫描单链表中剩下的结点*p(直至p==NULL为止),在有序表中通过比较查找插入*p的前驱结点*pre,然后将*p插入到pre之后*/
void Sort(LinkList &L) {
	//本算法实现将单链表L的结点重排,使其递增有序
	LNode *p = L->next, *pre;
	LNode *r = p->next;//r保持*p后继结点指针,以保证不断链
	p->next = NULL;//构造只含一个数据结点的有序表
	while (p != NULL) {
		r = p->next;
		pre = L;
		while (pre->next != NULL&&pre->next->data < p->data)
			pre = pre->next;//在有序表中查找插入*p的前驱结点*pre
		r->next = pre->next;//将*p插入到*pre之后
		pre->next = p;
		p = r;//扫描原单链表中剩下的结点
	}
}
