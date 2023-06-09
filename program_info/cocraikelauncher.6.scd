cocraikelauncher(6)


# NAME

cocraikelauncher - a launcher and instance manager for Minecraft.


# SYNOPSIS

*cocraikelauncher* [OPTIONS...]


# DESCRIPTION

Cocraike Launcher is a custom launcher for Minecraft that allows you to easily manage
multiple installations of Minecraft at once. It also allows you to easily
install and remove mods by simply dragging and dropping.
Here are the current features of Cocraike Launcher.

# OPTIONS

*-d, --dir*=DIRECTORY
	Use DIRECTORY as the Cocraike Launcher root.

*-l, --launch*=INSTANCE_ID
	Launch the instance specified by INSTANCE_ID.

*--show*=INSTANCE_ID
	Show the configuration window of the instance specified by INSTANCE_ID.

*--alive*
	Write a small 'live.check' file after Cocraike Launcher starts.

*-h, --help*
	Display help text and exit.

*-v, --version*
	Display program version and exit.

*-a, --profile*=PROFILE
	Use the account specified by PROFILE (only valid in combination with --launch).

# ENVIRONMENT

The behavior of the launcher can be customized by the following environment
variables, besides other common Qt variables:

*QT_LOGGING_RULES*
	Specifies which logging categories are shown in the logs. One can
	enable/disable multiple categories by separating them with a semicolon (;).

	The specific syntax, and alternatives to this setting, can be found at
	https://doc.qt.io/qt-6/qloggingcategory.html#configuring-categories.

*QT_MESSAGE_PATTERN*
	Specifies the format in which the console output will be shown.

	Available options, as well as syntax, can be viewed at
	https://doc.qt.io/qt-6/qtglobal.html#qSetMessagePattern.

# EXIT STATUS

*0*
	Success

*1*
	Failure (syntax or usage error; configuration error; unexpected error).

# BUGS

https://github.com/CocraikeLauncher/CocraikeLauncher/issues

# RESOURCES

GitHub: https://github.com/3NWT/CocraikeLauncher

Main website: https://prismlauncher.org

# AUTHORS

Cocraike Launcher Contributors
