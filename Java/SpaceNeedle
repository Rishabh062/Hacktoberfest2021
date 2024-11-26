
public class Space {
	public static final int SIZE = 10;

	public static void main(String[] args) {
		verticalLine();
		topPart();
		bottomPart();
		verticalLine();
		mainBody();
		topPart();
	}

	public static void verticalLine() {
		for (int i = 0; i < SIZE; i++) {
			// space
			for (int j = 0; j < SIZE * 3; j++) {
				System.out.print(" ");
			}
			System.out.println("||");
		}
	}

	public static void topPart() {
		for (int i = 0; i < SIZE; i++) {
			// space
			for (int j = 0; j < (SIZE - i - 1) * 3; j++) {
				System.out.print(" ");
			}
			System.out.print("__/");
			for (int j = 0; j < i * 3; j++) {
				System.out.print(":");
			}
			System.out.print("||");
			for (int j = 0; j < i * 3; j++) {
				System.out.print(":");
			}
			System.out.println("\\__");
		}
		
		System.out.print("|");
		for (int i = 0; i < SIZE * 6; i++) {
			System.out.print("\"");
		}
		System.out.println("|");
	}

	public static void bottomPart() {
		for (int i = 0; i < SIZE; i++) {
			// space
			for (int j = 0; j < i * 2; j++) {
				System.out.print(" ");
			}
			System.out.print("\\_");
			for (int j = 0; j < 3 * SIZE - 1 - 2 * i; j++) {
				System.out.print("/\\");
			}
			System.out.println("_/");
		}
	}

	public static void mainBody() {
		for (int i = 0; i < SIZE * 4; i++) {
			// space
			for (int j = 0; j < 2 * SIZE + 1; j++) {
				System.out.print(" ");
			}
			System.out.print("|");
			for (int j = 0; j < SIZE - 2; j++) {
				System.out.print("%");
			}
			System.out.print("||");
			// print %
			for (int j = 0; j < SIZE - 2; j++) {
				System.out.print("%");
			}
			System.out.println("|");
		}
	}
}
