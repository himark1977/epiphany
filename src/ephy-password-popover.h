/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 *  Copyright © 2023 Jamie Murphy <hello@itsjamie.dev>
 *
 *  This file is part of Epiphany.
 *
 *  Epiphany is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Epiphany is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Epiphany.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gio/gio.h>
#include <gtk/gtk.h>

#include "ephy-password-manager.h"

G_BEGIN_DECLS

#define EPHY_TYPE_PASSWORD_POPOVER (ephy_password_popover_get_type())

G_DECLARE_FINAL_TYPE (EphyPasswordPopover, ephy_password_popover, EPHY, PASSWORD_POPOVER, GtkPopover)

EphyPasswordPopover     *ephy_password_popover_new         (EphyPasswordRequestData *request_data);

G_END_DECLS
