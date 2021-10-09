#define NLINES 5
#define PARAWIDTH 60
#define SCRWIDTH 80
#define SCRHEIGHT 24
#define PAGE  PARAWIDTH*NLINES
#define ESC 27
#define HB 205
#define VB 186
#define TRC 187
#define BRC 188
#define BLC 200
#define TLC 201
#define TBR 185
#define TBL 204
#define LF 10
#define CR 13

#define RUNNING 1
/*Main Menu*/
#define SELECTUSER 1
#define STAT 2
#define VIEWRECORDS 3
#define ABOUT 4
#define	QUIT 5
/*User Select Menu*/
#define USERLIST 1
#define NEWUSER 2
#define BACK 3
/*Lesson Select Menu*/
#define LESSONLIST 1
#define NEWLESSON 2
#define BACK 3

#define N 8
#define ESC 27
#define CLRSCR  window(1,1,80,25);textbackground(0);clrscr();
/*keys*/
#define UP 72
#define DOWN 80

typedef struct
{
	char name[N];
}user;

typedef struct
{
	char title[N];
   unsigned long length;	/*total length of characters in the text file*/
}lesson;

typedef struct
{
	user u;	/*present user*/
   struct tm dtntm;	/*session date and time*/
   lesson  lsn;	/*lession title*/
   unsigned int wpm;	/*average words per minute*/
   float accuracy;
}session;
//struct tm {
//  int tm_sec;   /* Seconds */
//  int tm_min;   /* Minutes */
//  int tm_hour;  /* Hour (0--23) */
//  int tm_mday;  /* Day of month (1--31) */
//  int tm_mon;   /* Month (0--11) */
//  int tm_year;  /* Year (calendar year minus 1900) */
//  int tm_wday;  /* Weekday (0--6; Sunday = 0) */
//  int tm_yday;  /* Day of year (0--365) */
//  int tm_isdst; /* 0 if daylight savings time is not in effect) */
//};
/*define current user and current lesson*/
/*current user is int or char[]???*/
void loadFiles(void);
int mainmenu(void);
int userSelectMenu(void);
void viewStat(void);
void createUser(void);
int listUser(void);
//int lessonMenu(void);
int listLesson(void);
void beginSession(void);
void addRecord(session);
void sortSession(session[],int);
void LoadPage(int *,int,int,int);
void box(int x,int y,int width,int height,int fc,int bc);
void DrawMenu(int,char **,int);
void viewRecords(void);
void about(void);

