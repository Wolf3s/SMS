/*
#     ___  _ _      ___
#    |    | | |    |
# ___|    |   | ___|    PS2DEV Open Source Project.
#----------------------------------------------------------
# Copyright (c) 2002, A.Lee & Nicholas Van Veen
# All rights reserved.
# Adopted for SMS by Eugene Plotnikov
# 
# Redistribution and use of this software, in source and binary forms, with or
# without modification, are permitted provided that the following conditions are
# met:
# 
# 1. Redistributions of source code must retain the above copyright notice, this 
#    list of conditions and the following disclaimer.
#     
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation 
#    and/or other materials provided with the distribution.
#     
# 3. You are granted a license to use this software for academic, research and
#    non-commercial purposes only.
# 
# 4. The copyright holder imposes no restrictions on any code developed using
#    this software. However, the copyright holder retains a non-exclusive
#    royalty-free license to any modifications to the distribution made by the
#    licensee.
# 
# 5. Any licensee wishing to make commercial use of this software should contact
#    the copyright holder to execute the appropriate license for such commercial
#    use. Commercial use includes:
#  
#    -  Integration of all or part of the source code into a product for sale 
#       or commercial license by or on behalf of Licensee to third parties, or
# 
#    -  Distribution of the binary code or source code to third parties that 
#       need it to utilize a commercial product sold or licensed by or on 
#       behalf of Licensee.
#        
#  
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED 
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO 
# EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT 
# OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
# IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
# OF SUCH DAMAGE.
*/
#ifndef __CDVD_H
# define __CDVD_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

int  CDVD_Init       ( void );
void CDVD_Stop       ( void );
void CDVD_FlushCache ( void );
# ifdef __cplusplus
}
# endif  /* __cplusplus */
#endif  /* __CDVD_H */
