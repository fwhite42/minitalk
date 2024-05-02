/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   error_enum.h                                            4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/22 01:37:56 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:52:23 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

typedef enum
{
	CONFIG_FILE_EXT = 2 << 0;
	CONFIG_FILE_MISSING = 2 << 1;
	MAP_BROKEN = 2 << 2;
	MAP_WALLS_BROKEN = 2 << 3;
	PLAYER_NOT_ON_MAP = 2 << 4;
	EXIT_NOT_ON_MAP = 2 << 5;
	UNREACHABLE_EXIT = 2 << 6;
	UNREACHABLE_COIN = 2 << 7;
}	e_error
