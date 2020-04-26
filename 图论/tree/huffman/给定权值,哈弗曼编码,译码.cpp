//##################################################################
// File Name: 给定权值,哈弗曼编码,译码.c
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月26日 星期二 19时29分48秒
//=============================================================
//!/usr/bin/python

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;


typedef char *Huffmancode[6];

typedef struct
{
	int weight;
	int parent,lchild,rchild;
}HTNode,HuffmanTree[12];			

void select1(HuffmanTree ht, int n, int *s1, int *s2)
{	
	int temp[30];
	int sum = 0;
	for(int i=0; i<30; i++)  temp[i] = 0 ;

	for(int i=1; i<=n; i++)
	{
		if(!ht[i].parent) //在没有连接的 结点中
		{
			temp[sum] = ht[i].weight; //将没有连接的结点的权值保存在 temp 数组中
			sum++;
		}
	}

	sort(temp,temp + sum);

	for(int i=1; i<=n; i++)  //找到最小的两个数作为当前结点
	{
		if( temp[0]==ht[i].weight )  	*s1 = i;
		if( temp[1]==ht[i].weight )	*s2 = i;
	}
}

void CreatHuffmanTree(HuffmanTree ht, int w[], int n)
{			
	int m = 2*n-1;
	int s1,s2;

	for(int i=0; i<=n; i++)  //初始化 huffman 树
	{
		ht[i].weight = w[i];
		ht[i].lchild = 0;
		ht[i].rchild = 0; 
		ht[i].parent = 0;
	}

	for(int i=n+1; i<=m; i++) //初始化 huffman 树
	{
		ht[i].weight = 0; 
		ht[i].lchild = 0; 
		ht[i].rchild = 0;
		ht[i].parent = 0;
	}

	for(int i=n+1; i<=m; i++)
	{
		select1(ht, i-1, &s1, &s2);  //s2 为传出参数
		ht[i].weight = ht[s1].weight + ht[s2].weight ;
		ht[i].lchild = s1 ;
		ht[i].rchild = s2 ;
		ht[s1].parent = i ;
		ht[s2].parent = i ;
	}
}

void CrtHuffmanCodel(HuffmanTree ht, Huffmancode hc, int n)
{		
	char *cd;
	int start;
	int c,p;
	cd = (char *)malloc(n * sizeof(char)); //临时编码数组
	cd[n-1] = '\0';
	for(int i=1; i<=n; i++)
	{
		start = n-1; 
		c = i;
		p = ht[i].parent;
		while (p!=0)
		{
			--start;
			if(ht[p].lchild==c)
			{
				cd[start] = '0';
			}
			else 	cd[start] = '1';
			c = p;					
			p = ht[p].parent;
		}
		hc[i] = (char *)malloc((n - start) * sizeof(char));
		strcpy(hc[i], &cd[start]);
	}


	free(cd);
}

void print(Huffmancode hc)
{				
	for(int i=1; i<=6; i++)
	{
		switch(i)
		{
			case 1:
				printf("A:%s",hc[1]);break;
			case 2:
				printf("B:%s",hc[2]);break;
			case 3:
				printf("C:%s",hc[3]);break;
			case 4:
				printf("D:%s",hc[4]);break;
			case 5:
				printf("E:%s",hc[5]);break;
			case 6:
				printf("F:%s",hc[6]);break;
		}
		printf("\n");
	}
}

void println(HuffmanTree ht, int p)
{	
	switch(p){
		case 1:
			printf("A");break;
		case 2:
			printf("B");break;
		case 3:
			printf("C");break;
		case 4:
			printf("D");break;
		case 5:
			printf("E");break;
		case 6:
			printf("F");break;
	}
}

void TransHuffmancodel(HuffmanTree ht, char *c)
{
	int i,p,d; 

	p = 11;

	for(i=0; c[i]!='\0'; i++)
	{
		if (c[i]=='0')
		{
			p = ht[p].lchild;
			if(ht[p].lchild==0 && ht[p].rchild==0)
			{
				println(ht, p);
				p = 11;
			}
		}
		if (c[i]=='1')
		{
			p = ht[p].rchild;
			if(ht[p].lchild==0 && ht[p].rchild==0)
			{
				println(ht, p);
				p = 11;
			}
		}
	}
}

int main()
{
	HuffmanTree ht ;//创建一个数组

	int w[7];

	for(int i = 1; i < 7; i++)	scanf("%d",&w[i]);

	CreatHuffmanTree(ht, w, 6) ;

	Huffmancode hc;

	CrtHuffmanCodel(ht, hc, 6);



	char s[6], c[100];

	scanf("%s",s);
	getchar();
	scanf("%s",c);

	print(hc);

	for(int i=0; i<strlen(s); i++)
	{
		switch(s[i])
		{
			case 'A':
				printf("%s",hc[1]);break;
			case 'B':
				printf("%s",hc[2]);break;
			case 'C':
				printf("%s",hc[3]);break;
			case 'D':
				printf("%s",hc[4]);break;
			case 'E':
				printf("%s",hc[5]);break;
			case 'F':
				printf("%s",hc[6]);break;
		}
	}

	printf("\n");

	TransHuffmancodel(ht, c);

	printf("\n");

	return 0;
}
