void Min_Delete(LinkList &head) {
	//head是带头节点的单链表的头指针,本算法按递增顺序输出单链表中的数据元素
	while (head->next != NULL) {//循环到仅剩头节点
		pre = head;//pre为元素最小值结点的前驱结点的指针
		p = pre->next;//p为工作指针
		while (P->next != NULL) {
			pre = p;//记住当前最小值结点的前驱
			p = p->next;
		}
		printf(pre->next->data);//输出元素最小值结点的数据
		u = pre->next;
		pre->next = u->next;
		free(u);
	}//while
	free(head);//释放头节点
}