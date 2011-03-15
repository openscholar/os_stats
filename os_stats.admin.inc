<?php

/**
 * Validate the os_stats admin page
 */
function os_stats_admin_settings_validate($form, $form_state) {
	$expire = $form_state['values']['os_stats_cache_expiration'];
	if (!is_numeric($expire) || 
		(is_numeric($expire) && $expire < 0)) {
		form_set_error('os_stats_cache_expiration', t('Please enter a non-negative number'));
	}	
}