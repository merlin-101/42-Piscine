# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 19:23:16 by rnarciso          #+#    #+#              #
#    Updated: 2022/09/19 19:32:58 by rnarciso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

find . | wc -l | sed 's/ //g';
