-- Blocked words go in this table.
local blockedWords = {
        "shit",
        "fuck",
        "bitch"
};
-- The string which the blocked word should be
-- replaced with.
local strReplacement = "^$@!";
-- Function to check for blocked words and fix
-- the message.
local function blockWords(str)
        local words = {};
        -- Grabbing all the words and putting them in a table.
        str:gsub("(%w+)", function (w) table.insert(words, w); end);
        -- Replacing bad words with the 'strReplacement'.
        for _, word in ipairs(words) do
                for _, badWord in ipairs(blockedWords) do
                        if word:lower() == badWord:lower() then return true; end
                end
        end
        return false;
end

-- What are these for?
local ChatPrefix = "";
local WorldChannelName = "";

-- I am going to assume that the indexes
-- here are correct.
local Gmrank = {
        [0] = " |cff00ffffFOD User|r ",
        [1] = " |cffFF8400VIP 1 User |r",
        [2] = " |cffFC3F00VIP 2 User |r",
        [3] = " |cffFC3F00VIP| |r",
        [5] = " |cff00ffffFOD User|r ",
        [6] = " |cff00ffffFOD User|r ",
        [10] = " |cff00ffffFOD User|r ",
        [11] = " |cff00ffffFOD User|r ",
        [12] = " |cff00ffffFOD User|r ",
        [13] = " |cff00ffffFOD User|r ",
        [14] = " |cff00ffffFOD User|r ",
        [15] = " |cff00ffffFOD User|r ",
        [254] = "|cffDE2E2ECo.Inhaber |r",
        [255] = "|cffFF0000FoD Owner |r"
};
function ChatSystemSay(_, player, msg)
        if msg:find(ChatPrefix) == 1 then
                -- Filter the string for bad words.
                if not blockWords(msg) then
                        player:SendUnitSay(Gmrank[player:GetGMRank()] .. msg, 0)
                end
                return false;
        end
end
RegisterPlayerEvent(18, ChatSystemSay)