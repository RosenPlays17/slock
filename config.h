/* user and group to drop privileges to */
static const char *user  = "finn";
static const char *group = "finn";

// Font settings for the time text
static const float textsize = 64.0;
static const char* textfamily = "Rubik";
static const double textcolorred = 239;
static const double textcolorgreen = 219;
static const double textcolorblue = 255;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#16111b",     /* after initialization */
	[INPUT] =  "#16111b",   /* during input */
	[FAILED] = "#ff0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 1;

/* Background image path */
static const char* background_image = "/home/finn/Pictures/cherry-blossom.jpg";
