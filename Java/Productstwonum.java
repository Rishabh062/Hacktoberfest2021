public class Productstwonum {
	public static void main(String[] args) {
		int x = 5; int y = 10;
		int value = product(x, y);
		System.out.print(value);
	}
	static int product(int x, int y) {
		// if (x < y) {
		// 	return product(y, x);
		//} else
		if (y != 0) {
			return x + product(x, y - 1);
		} else
			return 0;
	}
}

//Using Recurison