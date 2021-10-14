from colorama import init
from colorama import Fore, Back, Style
from os import system
from time import sleep
import datetime as dt
init(autoreset=True)

intro = """
                            _________
                           /         /.
    .-------------.       /_________/ |
   /             / |      |         | |
  /+============+\ |      | |====|  | |
  ||C:\>        || |      |         | |
  ||            || |      | |====|  | |
  ||            || |      |   ___   | |
  ||            || |      |  |166|  | |
  ||            ||/@@@    |   ---   | |
  \+============+/    @   |_________|./.
                     @          ..  ....'
  ..................@     __.'.'  ''
 /oooooooooooooooo//     ///
/................//     /_/
------------------
Made by kurassh, with love <3"""

def show_clocks():
    system('clear')
    cur_time = dt.datetime.now().strftime("%H:%M").split(":")
    numbs_dict = {0:{0:" 0000",1:"00  00",2:"00  00",3:"00  00",4:" 0000"},1:{0:"1111", 1:"  11", 2:"  11", 3:"  11",4:"111111"},
        2:{0:" 2222", 1:"22  22", 2:"   22", 3:"  22", 4:"222222"},
        3:{0:" 3333", 1:"33  33", 2:"   333", 3:"33  33",4:" 3333"},4: {0:"44  44", 1:"44  44", 2:"444444", 3:"    44", 4:"    44"},
        5:{0:"555555", 1:"55", 2:"55555", 3:"    55", 4:"55555"}, 6:{0:" 6666", 1:"66", 2:"66666", 3:"66  66", 4:" 6666"},
        7:{0:"777777", 1:"   77", 2:"  77", 3:" 77", 4:"77"}, 8:{0:" 8888", 1:" 88  88", 2:" 8888", 3:"88  88", 4:" 8888"},
        9:{0:" 9999", 1:"99  99", 2:" 99999", 3:"    99", 4:" 9999"},
        }

    h1 = int(cur_time[0][0])
    h2 = int(cur_time[0][1])

    m1 = int(cur_time[1][0])
    m2 = int(cur_time[1][1])

    print("\t"+numbs_dict[h1][0]+"\t"+numbs_dict[h2][0]+"\t\t"+numbs_dict[m1][0]+"\t"+numbs_dict[m2][0])
    print("\t"+numbs_dict[h1][1]+"\t"+numbs_dict[h2][1]+"\t\t"+numbs_dict[m1][1]+"\t"+numbs_dict[m2][1])
    print("\t"+numbs_dict[h1][2]+"\t"+numbs_dict[h2][2]+"\t\t"+numbs_dict[m1][2]+"\t"+numbs_dict[m2][2])
    print("\t"+numbs_dict[h1][3]+"\t"+numbs_dict[h2][3]+"\t\t"+numbs_dict[m1][3]+"\t"+numbs_dict[m2][3])
    print("\t"+numbs_dict[h1][4]+"\t"+numbs_dict[h2][4]+"\t\t"+numbs_dict[m1][4]+"\t"+numbs_dict[m2][4])



def main():
    print(Fore.RED + Back.WHITE + intro)
    sleep(2)
    while True:
        try:
            show_clocks()
            sleep(20)
        except KeyboardInterrupt:
            print(Style.DIM + 'Bye!')
            exit()

main()
