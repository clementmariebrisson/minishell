#include "header.h"

int env( char *argv[] )
{
  int status;
  if( fork() == 0 ){
    printf( "SHELL=%s\n", getenv("SHELL") );
    printf("SESSION_MANAGER=%s\n", getenv("SESSION_MANAGER") );
    printf("QT_ACCESSIBILITY=%s\n", getenv("QT_ACCESSIBILITY") );
    printf("COLORTERM=%s\n", getenv("COLORTERM") );
    printf("XDG_CONFIG_DIRS=%s\n", getenv("XDG_CONFIG_DIRS") );
    printf("XDG_MENU_PREFIX=%s\n", getenv("XDG_MENU_PREFIX") );
    printf("GNOME_DESKTOP_SESSION_ID=%s\n", getenv("GNOME_DESKTOP_SESSION_ID") );
    printf("MANDATORY_PATH=%s\n", getenv("MANDATORY_PATH") );
    printf("GNOME_SHELL_SESSION_MODE=%s\n", getenv("GNOME_SHELL_SESSION_MODE") );
    printf("SSH_AUTH_SOCK=%s\n", getenv("SSH_AUTH_SOCK") );
    printf("XMODIFIERS=%s\n", getenv("XMODIFIERS") );
    printf("DESKTOP_SESSION=%s\n", getenv("DESKTOP_SESSION") );
    printf("SSH_AGENT_PID=%s\n", getenv("SSH_AGENT_PID") );
    printf("GTK_MODULES=%s\n", getenv("GTK_MODULES") );
    printf("PWD=%s\n", getenv("PWD") );
    printf("LOGNAME=%s\n", getenv("LOGNAME") );
    printf("XDG_SESSION_DESKTOP=%s\n", getenv("XDG_SESSION_DESKTOP") );
    printf("XDG_SESSION_TYPE=%s\n", getenv("XDG_SESSION_TYPE") );
    printf("GPG_AGENT_INFO=%s\n", getenv("GPG_AGENT_INFO") );
    printf("XAUTHORITY=%s\n", getenv("XAUTHORITY") );
    printf("WINDOWPATH=%s\n", getenv("WINDOWPATH") );
    printf("HOME=%s\n", getenv("HOME") );
    printf("USERNAME%s\n", getenv("USERNAME") );
    printf("IM_CONFIG_PHASE=%s\n", getenv("IM_CONFIG_PHASE") );
    printf("LANG=%s\n", getenv("LANG") );
    printf("LS_COLORS=%s\n", getenv("LS_COLORS") );
    printf("XDG_CURRENT_DESKTOP=%s\n", getenv("XDG_CURRENT_DESKTOP") );
    printf("VTE_VERSION=%s\n", getenv("VTE_VERSION"));
    printf("GNOME_TERMINAL_SCREEN=%s\n", getenv("GNOME_TERMINAL_SCREEN") );
    printf("INVOCATION_ID=%s\n", getenv("INVOCATION_ID") );
    printf("MANAGERPID=%s\n", getenv("MANAGERPID") );
    printf("LESSCLOSE=%s\n", getenv("LESSCLOSE") );
    printf("XDG_SESSION_CLASS=%s\n", getenv("XDG_SESSION_CLASS") );
    printf("TERM=%s\n", getenv("TERM") );
    printf("DEFAULTS_PATH=%s\n", getenv("DEFAULTS_PATH") );
    printf("LESSOPEN=%s\n", getenv("LESSOPEN") );
    printf("USER=%s\n", getenv("USER") );
    printf("GNOME_TERMINAL_SERVICE=%s\n", getenv("GNOME_TERMINAL_SERVICE") );
    printf("DISPLAY=%s\n", getenv("DISPLAY") );
    printf("SHLVL=%s\n", getenv("SHLVL") );
    printf("QT_IM_MODULE=%s\n", getenv("QT_IM_MODULE") );
    printf("XDG_RUNTIME_DIR=%s\n", getenv("XDG_RUNTIME_DIR") );
    printf("JOURNAL_STREAM=%s\n", getenv("JOURNAL_STREAM") );
    printf("XDG_DATA_DIRS=%s\n", getenv("XDG_DATA_DIRS") );
    printf("PATH=%s\n", getenv("PATH") );
    printf("GDMSESSION=%s\n", getenv("GDMSESSION") );
    printf("DBUS_SESSION_BUS_ADDRESS=%s\n", getenv("DBUS_SESSION_BUS_ADDRESS") );
    printf("OLDPWD=%s\n", getenv("OLDPWD") );
    printf("_=%s\n", getenv("_") );

  }
  else
    wait( &status );
  return 0;
}
