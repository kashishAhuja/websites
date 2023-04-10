
void abc(int a){
	++a;
	printf("%d",a);
	}
void main()
{
	int a=10;
	abc(++a);
	abc(a++);
	printf("%d",a);
}
return 0;
