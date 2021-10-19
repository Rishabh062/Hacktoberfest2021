class StringBuilder(object):
    """
    This class helps eliminate the reconstruction of string 
    giving an linear string construction time 0(N) 
    """
    def __init__(self, val="") -> None:
        self.store = [val]

    def append(self,val):
        self.__iadd__(val)
        return self

    def __iadd__(self, value):
        """appends a character to the sequence"""
        self.store.append(value)
        return self

    def __str__(self) -> str:
        """string representation from the built sequence"""
        return "".join(self.store)


if __name__ == "__main__":
    s =StringBuilder()
    s.append("Welcome").append(" ").append("to").append(" ").append("Hacktoberfest")
    print(s)
