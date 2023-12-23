/*class Example
{
	public static void main(String args[])
	{
		System.out.println("Hello World");
	}
}
*/




/*class Ex
{
	public static void main(String args[])
	{
		int num = 10;
		System.out.println("This is a number: "+num);
		System.out.println(num);
	}
}
*/



/*class For
{
	public static void main(String args[])
	{
		int x=0;
		for(x=0;x<10;x++)
		{
			System.out.println(x);
		}
	}
}
*/




/*class Fora
{
	public static void main(String args[])
	{
		for(int i=1;i<11;i++)
		{
			System.out.println("i:"+i);
		}
	}
}
*/




/*class Light
{
	public static void main(String args[])
	{
		int lightspeed=18600;
		long days=1000;

		long seconds, distance;
		seconds=days*24*60*60;
		distance=lightspeed*seconds;
		System.out.println(distance);
	}
}
*/




/*class Area
{
	public static void main(String args[])
	{
		double pi,r,a;
		pi=3.14;
		r=2.3;
		a=pi*r*r;
		System.out.println(a);
	}
}
*/



/*class Areaa
{
	public static void main(String args[])
	{
		char ch1,ch2;
		ch1=88;
		System.out.print(ch1++);
		ch2='Y';
		System.out.println(ch2++);
	}
}
*/



/*class Booltest
{
	public static void main(String args[])
	{
		boolean b=false;
		System.out.println("b is"+b);
		if(b)
		{
			System.out.print("Not printed");
		}
			System.out.println("10>9?"+(10>9));
	}
}
*/



/*class Scope
{
	public static void main(String args[])
	{
		int x;
		x=10;
		if(x==10)
		{
			int y=20;
			System.out.println("y is:"+y);
			x=y*2;
		}
		System.out.println(y);			//error
		System.out.println(x);
	}
}
*/




/*class Conversion
{
	public static void main(String args[])
	{
		byte b;
		int i=257;
		double d=323.24;
		b=(byte)i;
		System.out.print(b);
	}
}
*/


/*class Conversion1
{
	public static void main(String args[])
	{
		byte a=4;
		byte b=5;
		int i=a*b;
		//byte c=(byte)a*b;
		System.out.println(i);
	}
}
*/


/*class Conversion2
{
	public static void main(String args[])
	{
		byte a=4;
		byte b=5;
		int i=20;
		long l=111223;
		long x=i+l;
		System.out.print(x);
	}
}
*/




/*class Array
{
	public static void main(String args[])
	{
		int month[];
		month=new int[12];
		month[0]=1;
		for(int i=0;i<12;i++)
		{
			month[i]=i;
		}
		for(int i=0;i<12;i++)
		{
			System.out.println(month[i]);
		}
	}
}
*/



/*class Star
{
	public static void main(String args[])
	{
		for(int i=0;i<5;i++)
		{
			for(int j=5;j>i;j--)
			{
				System.out.print("*");
			}
		System.out.println();
		}
	}
}
*/



/*class Ternary
{
	public static void main(String args[])
	{
		int i=10,k;
		k=i<0?-i:i;
		System.out.println(i+ "is:" +k);
		i=-10;
		k=i<0?-i:i;
		System.out.println(i+ " is " +k);
	}
}
*/



class Ifelse
{
	public static void main(String args[])
	{
		int month=4;
		String season;
		if(month==12||month==1||month==2)
		season="Winter";
		else if(month==3||month==4||month==3)
		season="Spring";
		else
		season="Autumn";
		System.out.println("April is:" +season);
	}
}




