/* user and group to drop privileges to */
static const char *user  = "finn";
static const char *group = "finn";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "bleibe fern Vagabund";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x10";

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 1;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "date +'[%I:%M] Eindringling festgestellt!'";
