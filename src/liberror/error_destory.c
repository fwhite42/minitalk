/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   error_destory.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:44:14 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:44:19 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

void	error_destory(void *self)
{
	ft_bzero(self, sizeof(t_error));
	free(self);
}
