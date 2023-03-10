/* user and group to drop privileges to */
static const char *user  = "finn";
static const char *group = "finn";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#1a1a1a",   /* during input */
	[FAILED] = "#ff0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "bleibe fern Vagabund";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 1;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "date +'[%I:%M] Eindringling festgestellt!' >> /home/finn/warnung";
