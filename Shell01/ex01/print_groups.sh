# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 19:14:05 by rnarciso          #+#    #+#              #
#    Updated: 2022/09/19 19:19:43 by rnarciso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

id -nG $FT_USER | tr -d "\n" | tr ' ' ','
