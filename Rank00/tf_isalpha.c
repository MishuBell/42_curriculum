

/*
Returns true if c is an alphabetic character (a letter). If islower or isupper is true 
of a character, then isalpha is also true.

Preliminary: | MT-Safe | AS-Safe | AC-Safe 
 
Safety Label	                            Meaning
MT-Safe	   MultiThread Safe                 Safe in multi-threaded programs
AS-Safe	   Asynchronous Signal Safe         Safe in signal handlers
AC-Safe	   Asynchronous Cancellation Safe   Safe if threads can be cancelled anytime
*/

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

