// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PolyMC - Minecraft Launcher
 *  Copyright (C) 2022 Sefa Eyeoglu <contact@scrumplex.net>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 *      Copyright 2013-2021 MultiMC Contributors
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */

#include "BuildConfig.h"
#include <QObject>

const Config BuildConfig;

Config::Config()
{
    // Name and copyright
    LAUNCHER_NAME = "CocraikeLauncher";
    LAUNCHER_APP_BINARY_NAME = "cocraikelauncher";
    LAUNCHER_DISPLAYNAME = "Cocraike Launcher";
    LAUNCHER_COPYRIGHT = "Cocraike Launcher Contributors\n© 2021-2022 PolyMC Contributors \n© 2012-2021 MultiMC Contributors";
    LAUNCHER_DOMAIN = "prismlauncher.org";
    LAUNCHER_CONFIGFILE = "cocraikelauncher.cfg";
    LAUNCHER_GIT = "https://github.com/3NWT/CocraikeLauncher";
    LAUNCHER_DESKTOPFILENAME = "org.cocraikelauncher.CocraikeLauncher.desktop";
    LAUNCHER_SVGFILENAME = "org.cocraikelauncher.CocraikeLauncher.svg";

    USER_AGENT = "CocraikeLauncher/7.0";
    USER_AGENT_UNCACHED = USER_AGENT + " (Uncached)";

    // Version information
    VERSION_MAJOR = 7;
    VERSION_MINOR = 0;

    BUILD_PLATFORM = "";
    BUILD_DATE = "2024-01-22";
    UPDATER_BASE = "";

    MAC_SPARKLE_PUB_KEY = "";
    MAC_SPARKLE_APPCAST_URL = "";

    if (BUILD_PLATFORM == "macOS" && !MAC_SPARKLE_PUB_KEY.isEmpty() && !MAC_SPARKLE_APPCAST_URL.isEmpty())
    {
        UPDATER_ENABLED = true;
    }

    GIT_COMMIT = "5d9e42fde940430aa6010d8d4c2bcb765baccd98";
    GIT_TAG = "-128-NOTFOUND";
    GIT_REFSPEC = "refs/heads/main";

    // Assume that builds outside of Git repos are "stable"
    if (GIT_REFSPEC == QStringLiteral("GITDIR-NOTFOUND")
        || GIT_TAG == QStringLiteral("GITDIR-NOTFOUND")
        || GIT_REFSPEC == QStringLiteral("")
        || GIT_TAG == QStringLiteral("GIT-NOTFOUND"))
    {
        GIT_REFSPEC = "refs/heads/stable";
        GIT_TAG = versionString();
    }

    if (GIT_REFSPEC.startsWith("refs/heads/"))
    {
        VERSION_CHANNEL = GIT_REFSPEC;
        VERSION_CHANNEL.remove("refs/heads/");
        if(!UPDATER_BASE.isEmpty() && !BUILD_PLATFORM.isEmpty()) {
            UPDATER_ENABLED = true;
        }
    }
    else if (!GIT_COMMIT.isEmpty())
    {
        VERSION_CHANNEL = GIT_COMMIT.mid(0, 8);
    }
    else
    {
        VERSION_CHANNEL = "unknown";
    }

    NEWS_RSS_URL = "https://prismlauncher.org/feed/feed.xml";
    NEWS_OPEN_URL = "https://prismlauncher.org/news";
    HELP_URL = "https://prismlauncher.org/wiki/help-pages/%1";
    IMGUR_CLIENT_ID = "5b97b0713fba4a3";
    MSA_CLIENT_ID = "c36a9fb6-4f2a-41ff-90bd-ae7cc92031eb";
    FLAME_API_KEY = "$2a$10$wuAJuNZuted3NORVmpgUC.m8sI.pv1tOPKZyBgLFGjxFp/br0lZCC";
    META_URL = "https://meta.prismlauncher.org/v1/";

    BUG_TRACKER_URL = "https://github.com/CocraikeLauncher/CocraikeLauncher/issues";
    TRANSLATIONS_URL = "https://hosted.weblate.org/projects/cocraikelauncher/launcher/";
    MATRIX_URL = "https://matrix.to/#/#cocraikelauncher:matrix.org";
    DISCORD_URL = "https://discord.gg/cocraikelauncher";
    SUBREDDIT_URL = "https://www.reddit.com/r/CocraikeLauncher/";
}

QString Config::versionString() const
{
    return QString("%1.%2").arg(VERSION_MAJOR).arg(VERSION_MINOR);
}

QString Config::printableVersionString() const
{
    QString vstr = versionString();

    // If the build is not a main release, append the channel
    if(VERSION_CHANNEL != "stable" && GIT_TAG != vstr)
    {
        vstr += "-" + VERSION_CHANNEL;
    }
    return vstr;
}
